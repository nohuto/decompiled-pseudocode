/*
 * XREFs of _RtlpSysVolCreateSecurityDescriptor@8 @ 0x4B35DDBB
 * Callers:
 *     _RtlCreateSystemVolumeInformationFolder@4 @ 0x4B35D890 (_RtlCreateSystemVolumeInformationFolder@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 *     _RtlCreateAcl@12 @ 0x4B2D7BF0 (_RtlCreateAcl@12.c)
 *     _RtlSetDaclSecurityDescriptor@16 @ 0x4B2D8610 (_RtlSetDaclSecurityDescriptor@16.c)
 *     _RtlCreateSecurityDescriptor@8 @ 0x4B2D8740 (_RtlCreateSecurityDescriptor@8.c)
 *     _RtlSetControlSecurityDescriptor@12 @ 0x4B2ED370 (_RtlSetControlSecurityDescriptor@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall RtlpSysVolCreateSecurityDescriptor(int *a1, int *a2)
{
  _DWORD *Heap; // eax
  int v3; // edi
  int SecurityDescriptor; // esi
  int v6; // eax
  int v7; // esi
  int Acl; // ebx
  void *ProcessHeap; // [esp-Ch] [ebp-3Ch]
  __int16 Src; // [esp+14h] [ebp-1Ch] BYREF
  int v13; // [esp+16h] [ebp-1Ah]
  __int16 v14; // [esp+1Ah] [ebp-16h]
  int v15; // [esp+1Ch] [ebp-14h]

  Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 20);
  v3 = (int)Heap;
  if ( !Heap )
    return -1073741670;
  SecurityDescriptor = RtlCreateSecurityDescriptor(Heap, 1);
  if ( SecurityDescriptor < 0 )
    goto LABEL_11;
  v13 = 0;
  v14 = 1280;
  Src = 257;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v15 = 18;
  v6 = RtlAllocateHeap((int)ProcessHeap, 0, 28);
  v7 = v6;
  if ( !v6 )
  {
    SecurityDescriptor = -1073741670;
LABEL_11:
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v3);
    return SecurityDescriptor;
  }
  Acl = RtlCreateAcl(v6, 0x1Cu, 2u);
  if ( Acl < 0
    || (Acl = RtlpAddKnownAce(v7, 2u, 3, 0x1FFFFF, (unsigned __int8 *)&Src, 0), Acl < 0)
    || (Acl = RtlSetDaclSecurityDescriptor(v3, 1, v7, 0), Acl < 0)
    || (Acl = RtlSetControlSecurityDescriptor(v3, 0x1000u, 0x1000u), Acl < 0) )
  {
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v7);
    SecurityDescriptor = Acl;
    goto LABEL_11;
  }
  *a1 = v3;
  *a2 = v7;
  return 0;
}
