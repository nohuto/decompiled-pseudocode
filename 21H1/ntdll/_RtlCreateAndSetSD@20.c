/*
 * XREFs of _RtlCreateAndSetSD@20 @ 0x4B335C50
 * Callers:
 *     _RtlCreateUserSecurityObject@28 @ 0x4B335F30 (_RtlCreateUserSecurityObject@28.c)
 * Callees:
 *     _RtlAddAce@20 @ 0x4B2AAF90 (_RtlAddAce@20.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCreateAcl@12 @ 0x4B2D7BF0 (_RtlCreateAcl@12.c)
 *     _RtlSetDaclSecurityDescriptor@16 @ 0x4B2D8610 (_RtlSetDaclSecurityDescriptor@16.c)
 *     _RtlSetGroupSecurityDescriptor@12 @ 0x4B2D8680 (_RtlSetGroupSecurityDescriptor@12.c)
 *     _RtlSetOwnerSecurityDescriptor@12 @ 0x4B2D86E0 (_RtlSetOwnerSecurityDescriptor@12.c)
 *     _RtlCreateSecurityDescriptor@8 @ 0x4B2D8740 (_RtlCreateSecurityDescriptor@8.c)
 *     _RtlSetSaclSecurityDescriptor@16 @ 0x4B2E7F40 (_RtlSetSaclSecurityDescriptor@16.c)
 *     _RtlpInitializeAllowedAce@24 @ 0x4B336734 (_RtlpInitializeAllowedAce@24.c)
 *     _RtlpInitializeAuditAce@24 @ 0x4B336770 (_RtlpInitializeAuditAce@24.c)
 *     _RtlpInitializeDeniedAce@24 @ 0x4B3367AC (_RtlpInitializeDeniedAce@24.c)
 */

int __stdcall RtlCreateAndSetSD(int a1, unsigned int a2, int a3, int a4, _DWORD *a5)
{
  int Acl; // esi
  void *ProcessHeap; // edi
  unsigned int v7; // ebx
  unsigned int v8; // edx
  int v9; // edi
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int Heap; // eax
  _DWORD *v15; // edi
  int v16; // eax
  int v17; // ebx
  int v19; // ebx
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // [esp+Ch] [ebp-20h]
  int v24; // [esp+Ch] [ebp-20h]
  int v25; // [esp+10h] [ebp-1Ch]
  char *Src; // [esp+14h] [ebp-18h]
  unsigned __int8 *Srca; // [esp+14h] [ebp-18h]
  int v28; // [esp+18h] [ebp-14h]
  unsigned int v29; // [esp+1Ch] [ebp-10h]
  int v30; // [esp+1Ch] [ebp-10h]
  unsigned int v31; // [esp+20h] [ebp-Ch]
  int v32; // [esp+20h] [ebp-Ch]
  int v33; // [esp+24h] [ebp-8h]
  int v34; // [esp+28h] [ebp-4h]

  Acl = 0;
  v28 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v7 = 8;
  v8 = 8;
  v25 = 0;
  v31 = 8;
  v29 = 0;
  v33 = 0;
  v34 = (int)ProcessHeap;
  Src = 0;
  if ( a2 )
  {
    v9 = a1;
    while ( 1 )
    {
      v10 = *(unsigned __int8 *)(**(_DWORD **)(v9 + 8) + 1);
      if ( !*(_BYTE *)v9 || *(_BYTE *)v9 == 1 )
      {
        v11 = 4 * v10 + 20;
        if ( v11 + v7 < v7 )
          return -1073741801;
        v7 += v11;
      }
      else
      {
        if ( *(_BYTE *)v9 != 2 )
          return -1073741811;
        v11 = 4 * v10 + 20;
        v12 = v11 + v8;
        if ( v11 + v8 < v8 )
          return -1073741801;
        v8 += v11;
        v31 = v12;
      }
      if ( v29 <= v11 )
        v29 = v11;
      v9 += 12;
      if ( (unsigned int)++Src >= a2 )
      {
        ProcessHeap = (void *)v34;
        break;
      }
    }
  }
  v13 = 20;
  if ( v7 != 8 )
  {
    if ( v7 + 20 < 0x14 )
      return -1073741801;
    v13 = v7 + 20;
  }
  if ( v8 != 8 )
  {
    if ( v13 + v8 < v13 )
      return -1073741801;
    v13 += v8;
  }
  Heap = RtlAllocateHeap((int)ProcessHeap, NtdllBaseTag + 1310720, v13);
  v15 = (_DWORD *)Heap;
  if ( Heap )
  {
    v16 = Heap + 20;
    if ( v7 != 8 )
    {
      v28 = (int)(v15 + 5);
      v23 = v7 + v16;
      Acl = RtlCreateAcl((int)(v15 + 5), v7, 2u);
      if ( Acl < 0 )
        goto LABEL_49;
      v16 = v23;
    }
    if ( v31 == 8 || (v25 = v16, Acl = RtlCreateAcl(v16, v31, 2u), Acl >= 0) )
    {
      v17 = v34;
      v33 = RtlAllocateHeap(v34, NtdllBaseTag + 1310720, v29);
      if ( !v33 )
      {
        Acl = -1073741801;
        goto LABEL_50;
      }
      v24 = 0;
      if ( !a2 )
      {
LABEL_43:
        Acl = RtlCreateSecurityDescriptor(v15, 1);
        if ( Acl >= 0 )
        {
          Acl = RtlSetOwnerSecurityDescriptor((int)v15, a3, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetGroupSecurityDescriptor((int)v15, a4, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor((int)v15, 1, v28, 0);
              if ( Acl >= 0 )
              {
                Acl = RtlSetSaclSecurityDescriptor((int)v15, v25 != 0, v25, 0);
                if ( Acl >= 0 )
                {
                  Acl = 0;
                  *a5 = v15;
                  goto LABEL_51;
                }
              }
            }
          }
        }
LABEL_50:
        RtlFreeHeap(v17, 0, (int)v15);
LABEL_51:
        if ( v33 )
          RtlFreeHeap(v17, 0, v33);
        return Acl;
      }
      v19 = a1 + 4;
      while ( 1 )
      {
        v20 = 0;
        Srca = **(unsigned __int8 ***)(v19 + 4);
        v21 = 4 * Srca[1] + 8;
        if ( *(_BYTE *)(v19 - 4) )
        {
          if ( *(_BYTE *)(v19 - 4) == 1 )
          {
            v30 = v28;
            v32 = 4 * Srca[1] + 20;
            v22 = RtlpInitializeDeniedAce(*(_BYTE *)(v19 - 3), *(_BYTE *)(v19 - 2), *(_DWORD *)v19, Srca);
          }
          else
          {
            if ( *(_BYTE *)(v19 - 4) != 2 )
              goto LABEL_39;
            v30 = v25;
            v32 = 4 * Srca[1] + 20;
            v22 = RtlpInitializeAuditAce(*(_BYTE *)(v19 - 3), *(_BYTE *)(v19 - 2), *(_DWORD *)v19, Srca);
          }
        }
        else
        {
          v30 = v28;
          v32 = 4 * Srca[1] + 20;
          v22 = RtlpInitializeAllowedAce(*(_BYTE *)(v19 - 3), *(_BYTE *)(v19 - 2), *(_DWORD *)v19, Srca);
        }
        v21 = v32;
        Acl = v22;
        v20 = v30;
LABEL_39:
        if ( Acl < 0 )
          break;
        Acl = RtlAddAce(v20, 2u, 0xFFFFFFFF, v33, v21);
        if ( Acl < 0 )
          break;
        v19 += 12;
        if ( ++v24 >= a2 )
        {
          v17 = v34;
          goto LABEL_43;
        }
      }
    }
LABEL_49:
    v17 = v34;
    goto LABEL_50;
  }
  return -1073741801;
}
