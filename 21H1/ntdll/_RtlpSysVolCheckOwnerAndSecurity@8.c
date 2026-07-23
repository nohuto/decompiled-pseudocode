/*
 * XREFs of _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE
 * Callers:
 *     _RtlCreateSystemVolumeInformationFolder@4 @ 0x4B35D890 (_RtlCreateSystemVolumeInformationFolder@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlEqualSid@8 @ 0x4B2D85D0 (_RtlEqualSid@8.c)
 *     _RtlSetDaclSecurityDescriptor@16 @ 0x4B2D8610 (_RtlSetDaclSecurityDescriptor@16.c)
 *     _RtlSetOwnerSecurityDescriptor@12 @ 0x4B2D86E0 (_RtlSetOwnerSecurityDescriptor@12.c)
 *     _RtlGetDaclSecurityDescriptor@16 @ 0x4B2E5690 (_RtlGetDaclSecurityDescriptor@16.c)
 *     _RtlMakeSelfRelativeSD@12 @ 0x4B2E6A30 (_RtlMakeSelfRelativeSD@12.c)
 *     _RtlGetAce@12 @ 0x4B2EA0A0 (_RtlGetAce@12.c)
 *     _RtlGetOwnerSecurityDescriptor@12 @ 0x4B2EAA80 (_RtlGetOwnerSecurityDescriptor@12.c)
 *     _NtQuerySecurityObject@20 @ 0x4B2F3F30 (_NtQuerySecurityObject@20.c)
 *     _NtSetSecurityObject@12 @ 0x4B2F43F0 (_NtSetSecurityObject@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlSelfRelativeToAbsoluteSD2@8 @ 0x4B345B10 (_RtlSelfRelativeToAbsoluteSD2@8.c)
 */

NTSTATUS __fastcall RtlpSysVolCheckOwnerAndSecurity(HANDLE Handle, ACL *a2)
{
  PVOID Heap; // esi
  NTSTATUS DaclSecurityDescriptor; // edi
  ULONG i; // ebx
  _BYTE *v7; // edi
  char v8; // al
  NTSTATUS SelfRelativeSD; // eax
  PVOID v10; // eax
  PVOID v11; // edi
  NTSTATUS v12; // ebx
  NTSTATUS v13; // esi
  SIZE_T v14; // [esp-4h] [ebp-64h]
  SIZE_T v15; // [esp-4h] [ebp-64h]
  size_t v16; // [esp-4h] [ebp-64h]
  PVOID Ace; // [esp+14h] [ebp-4Ch] BYREF
  PSID Owner; // [esp+18h] [ebp-48h] BYREF
  PACL Dacl; // [esp+1Ch] [ebp-44h] BYREF
  BOOLEAN OwnerDefaulted; // [esp+21h] [ebp-3Fh] BYREF
  BOOLEAN DaclDefaulted; // [esp+22h] [ebp-3Eh] BYREF
  BOOLEAN DaclPresent; // [esp+23h] [ebp-3Dh] BYREF
  ULONG LengthNeeded; // [esp+24h] [ebp-3Ch] BYREF
  ULONG BufferSize; // [esp+28h] [ebp-38h] BYREF
  __int16 v27; // [esp+2Ch] [ebp-34h] BYREF
  int v28; // [esp+2Eh] [ebp-32h]
  __int16 v29; // [esp+32h] [ebp-2Eh]
  int v30; // [esp+34h] [ebp-2Ch]
  __int16 Sid2; // [esp+44h] [ebp-1Ch] BYREF
  int v32; // [esp+46h] [ebp-1Ah]
  __int16 v33; // [esp+4Ah] [ebp-16h]
  int v34; // [esp+4Ch] [ebp-14h]
  int v35; // [esp+50h] [ebp-10h]

  Dacl = 0;
  if ( NtQuerySecurityObject(Handle, 5u, 0, 0, &LengthNeeded) != -1073741789 )
    return 0;
  LODWORD(v14) = LengthNeeded;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
  if ( !Heap )
    return -1073741670;
  DaclSecurityDescriptor = NtQuerySecurityObject(Handle, 5u, Heap, LengthNeeded, &LengthNeeded);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_6;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(Heap, &DaclPresent, &Dacl, &DaclDefaulted);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_6;
  DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(Heap, &Owner, &OwnerDefaulted);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_6;
  v27 = 257;
  v28 = 0;
  v29 = 1280;
  v30 = 18;
  Sid2 = 513;
  v32 = 0;
  v33 = 1280;
  v34 = 32;
  v35 = 544;
  if ( Owner && RtlEqualSid(Owner, &Sid2) && DaclPresent && Dacl )
  {
    for ( i = 0; ; ++i )
    {
      if ( RtlGetAce(Dacl, i, &Ace) >= 0 )
      {
        v7 = Ace;
      }
      else
      {
        v7 = 0;
        Ace = 0;
      }
      if ( !v7 )
        break;
      if ( !*v7 && RtlEqualSid(v7 + 8, &v27) )
      {
        v8 = v7[1];
        if ( (v8 & 1) != 0 && (v8 & 2) != 0 )
        {
          DaclSecurityDescriptor = 0;
          goto LABEL_6;
        }
        v7[1] = v8 | 3;
        SelfRelativeSD = NtSetSecurityObject(Handle, 4u, Heap);
        goto LABEL_30;
      }
    }
  }
  BufferSize = LengthNeeded;
  if ( RtlSelfRelativeToAbsoluteSD2(Heap, &BufferSize) == -1073741789 )
  {
    LODWORD(v15) = BufferSize;
    v10 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
    v11 = v10;
    if ( !v10 )
      goto LABEL_34;
    LODWORD(v16) = LengthNeeded;
    memcpy(v10, Heap, v16);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    Heap = v11;
    LengthNeeded = BufferSize;
    v12 = RtlSelfRelativeToAbsoluteSD2(v11, &LengthNeeded);
    if ( v12 < 0 )
    {
LABEL_28:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
      return v12;
    }
  }
  SelfRelativeSD = RtlSetOwnerSecurityDescriptor(Heap, &Sid2, 0);
  if ( SelfRelativeSD < 0
    || (SelfRelativeSD = RtlSetDaclSecurityDescriptor(Heap, 1u, a2, 0), SelfRelativeSD < 0)
    || (BufferSize = 0, SelfRelativeSD = RtlMakeSelfRelativeSD(Heap, 0, &BufferSize), SelfRelativeSD != -1073741789) )
  {
LABEL_30:
    DaclSecurityDescriptor = SelfRelativeSD;
LABEL_6:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return DaclSecurityDescriptor;
  }
  LODWORD(v15) = BufferSize;
  v11 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
  if ( !v11 )
  {
LABEL_34:
    DaclSecurityDescriptor = -1073741670;
    goto LABEL_6;
  }
  v12 = RtlMakeSelfRelativeSD(Heap, v11, &BufferSize);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( v12 < 0 )
    goto LABEL_28;
  LengthNeeded = BufferSize;
  v13 = NtSetSecurityObject(Handle, 5u, v11);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  return v13;
}
