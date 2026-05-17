/*
 * XREFs of _RtlpGetDefaultTrustSubjectContext@8 @ 0x4B2D9164
 * Callers:
 *     _RtlpGetDefaultsSubjectContext@36 @ 0x4B2D8FCB (_RtlpGetDefaultsSubjectContext@36.c)
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlSidDominatesForTrust@12 @ 0x4B2D9290 (_RtlSidDominatesForTrust@12.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall RtlpGetDefaultTrustSubjectContext(int a1, int *a2)
{
  unsigned __int8 **v3; // ebx
  int v4; // edi
  int v5; // ecx
  _DWORD *Heap; // eax
  int v7; // esi
  void *ProcessHeap; // [esp+10h] [ebp-A8h]
  int v11; // [esp+14h] [ebp-A4h] BYREF
  int v12; // [esp+18h] [ebp-A0h] BYREF
  char v13; // [esp+1Fh] [ebp-99h] BYREF
  _DWORD v14[18]; // [esp+20h] [ebp-98h] BYREF
  _DWORD v15[19]; // [esp+68h] [ebp-50h] BYREF

  v12 = 72;
  v3 = (unsigned __int8 **)v15;
  v11 = 72;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v13 = 0;
  v4 = ZwQueryInformationToken(-4, 41, v15, 72, &v12);
  if ( v4 < 0 )
    return v4;
  if ( !a1 )
    goto LABEL_14;
  v4 = ZwQueryInformationToken(a1, 41, v14, v11, &v11);
  if ( v4 < 0 )
    return v4;
  v4 = RtlSidDominatesForTrust(v15[0], v14[0], &v13);
  if ( v4 < 0 )
    return v4;
  if ( v13 )
  {
    v5 = v11;
    v3 = (unsigned __int8 **)v14;
    v12 = v11;
  }
  else
  {
LABEL_14:
    v5 = v12;
  }
  Heap = (_DWORD *)RtlAllocateHeap((int)ProcessHeap, NtdllBaseTag + 1310720, v5);
  v7 = (int)Heap;
  if ( !Heap )
    return -1073741801;
  if ( !*v3 )
  {
    *Heap = 0;
LABEL_10:
    *a2 = v7;
    v7 = 0;
    goto LABEL_11;
  }
  *Heap = Heap + 1;
  v4 = RtlCopySid(v12 - 4, Heap + 1, *v3);
  if ( v4 >= 0 )
    goto LABEL_10;
LABEL_11:
  if ( v7 )
    RtlFreeHeap((int)ProcessHeap, 0, v7);
  return v4;
}
