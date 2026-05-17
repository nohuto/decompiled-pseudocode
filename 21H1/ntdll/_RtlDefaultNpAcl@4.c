/*
 * XREFs of _RtlDefaultNpAcl@4 @ 0x4B335F90
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 *     _RtlCreateAcl@12 @ 0x4B2D7BF0 (_RtlCreateAcl@12.c)
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlGetAppContainerParent@8 @ 0x4B3462F0 (_RtlGetAppContainerParent@8.c)
 *     _RtlGetAppContainerSidType@8 @ 0x4B3463A0 (_RtlGetAppContainerSidType@8.c)
 */

int __stdcall RtlDefaultNpAcl(int *a1)
{
  int *v1; // ebx
  unsigned __int8 **v2; // edi
  unsigned __int8 **Heap; // eax
  int InformationToken; // esi
  int v5; // ecx
  unsigned int v6; // esi
  int v7; // eax
  void *v8; // ebx
  int v9; // ecx
  int v10; // ecx
  int *v11; // esi
  int v12; // ecx
  int v14; // [esp+Ch] [ebp-3Ch] BYREF
  _BYTE v15[4]; // [esp+10h] [ebp-38h] BYREF
  int v16; // [esp+14h] [ebp-34h] BYREF
  unsigned __int8 **v17; // [esp+18h] [ebp-30h]
  int v18; // [esp+1Ch] [ebp-2Ch] BYREF
  __int16 v19; // [esp+20h] [ebp-28h]
  int *v20; // [esp+24h] [ebp-24h]
  int v21; // [esp+28h] [ebp-20h] BYREF
  __int16 v22; // [esp+2Ch] [ebp-1Ch]
  void *v23; // [esp+30h] [ebp-18h] BYREF
  unsigned __int8 Src[8]; // [esp+34h] [ebp-14h] BYREF
  int v25; // [esp+3Ch] [ebp-Ch]
  int v26; // [esp+40h] [ebp-8h]

  v1 = a1;
  *a1 = 0;
  v2 = 0;
  v21 = 0;
  v18 = 0;
  v23 = 0;
  v14 = 0;
  v20 = a1;
  v22 = 1280;
  v19 = 256;
  Heap = (unsigned __int8 **)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 72);
  v17 = Heap;
  if ( Heap )
  {
    InformationToken = ZwQueryInformationToken(-6, 4, (int)Heap, 72, (int)v15);
    if ( InformationToken < 0 )
      goto LABEL_29;
    v16 = 0;
    if ( ZwQueryInformationToken(-6, 29, (int)&v16, 4, (int)v15) < 0 || !v16 )
      goto LABEL_12;
    v2 = (unsigned __int8 **)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 72);
    if ( !v2 )
    {
      InformationToken = -1073741801;
      goto LABEL_29;
    }
    InformationToken = ZwQueryInformationToken(-6, 31, (int)v2, 72, (int)v15);
    if ( InformationToken >= 0 )
    {
      InformationToken = RtlGetAppContainerSidType(*v2, &v14);
      if ( InformationToken >= 0 )
      {
        if ( v14 != 1 || (InformationToken = RtlGetAppContainerParent(*v2, &v23), InformationToken >= 0) )
        {
LABEL_12:
          v5 = 52;
          if ( v2 )
            v5 = 4 * (*v2)[1] + 68;
          if ( v23 )
            v5 += 4 * *((unsigned __int8 *)v23 + 1) + 16;
          v6 = v5 + 4 * ((*v17)[1] + 14);
          v7 = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v6);
          *a1 = v7;
          if ( v7 )
          {
            RtlCreateAcl(v7, v6, 2u);
            RtlInitializeSid((int)Src, (int)&v21, 1u);
            v9 = *a1;
            v25 = 18;
            RtlpAddKnownAce(v9, 2u, 0, 0x10000000, Src, 0);
            RtlInitializeSid((int)Src, (int)&v21, 2u);
            v10 = *a1;
            v25 = 32;
            v26 = 544;
            RtlpAddKnownAce(v10, 2u, 0, 0x10000000, Src, 0);
            if ( v2 )
              RtlpAddKnownAce(*a1, 2u, 0, 0x10000000, *v2, 0);
            v8 = v23;
            v11 = v20;
            if ( v23 )
              RtlpAddKnownAce(*v20, 2u, 0, 0x10000000, (unsigned __int8 *)v23, 0);
            RtlpAddKnownAce(*v11, 2u, 0, 0x10000000, *v17, 0);
            RtlInitializeSid((int)Src, (int)&v18, 1u);
            v25 = 0;
            RtlpAddKnownAce(*v11, 2u, 0, 0x80000000, Src, 0);
            RtlInitializeSid((int)Src, (int)&v21, 1u);
            v12 = *v11;
            v25 = 7;
            RtlpAddKnownAce(v12, 2u, 0, 0x80000000, Src, 0);
            InformationToken = 0;
            goto LABEL_24;
          }
          InformationToken = -1073741801;
        }
      }
    }
    v8 = v23;
LABEL_24:
    if ( v2 )
    {
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v2);
      v8 = v23;
    }
    if ( v8 )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v8);
    v1 = v20;
LABEL_29:
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v17);
    if ( InformationToken >= 0 )
      return InformationToken;
    goto LABEL_30;
  }
  InformationToken = -1073741801;
LABEL_30:
  if ( *v1 )
  {
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *v1);
    *v1 = 0;
  }
  return InformationToken;
}
