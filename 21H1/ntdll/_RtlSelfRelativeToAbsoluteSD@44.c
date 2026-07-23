/*
 * XREFs of _RtlSelfRelativeToAbsoluteSD@44 @ 0x4B345BB0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpQuerySecurityDescriptor@36 @ 0x4B2E6B3E (_RtlpQuerySecurityDescriptor@36.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

NTSTATUS __cdecl RtlSelfRelativeToAbsoluteSD(
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PULONG AbsoluteSecurityDescriptorSize,
        PACL Dacl,
        PULONG DaclSize,
        PACL Sacl,
        PULONG SaclSize,
        PSID Owner,
        PULONG OwnerSize,
        PSID PrimaryGroup,
        PULONG PrimaryGroupSize)
{
  int v11; // edi
  PULONG v13; // eax
  unsigned __int8 *v14; // ecx
  size_t v15; // [esp-10h] [ebp-30h]
  size_t v16; // [esp-10h] [ebp-30h]
  void *v17; // [esp+0h] [ebp-20h] BYREF
  void *v18; // [esp+4h] [ebp-1Ch] BYREF
  void *v19; // [esp+8h] [ebp-18h] BYREF
  void *Src; // [esp+Ch] [ebp-14h] BYREF
  ULONG v21; // [esp+10h] [ebp-10h] BYREF
  ULONG v22; // [esp+14h] [ebp-Ch] BYREF
  ULONG v23; // [esp+18h] [ebp-8h] BYREF
  ULONG v24; // [esp+1Ch] [ebp-4h] BYREF

  if ( *((__int16 *)SelfRelativeSecurityDescriptor + 1) >= 0 )
    return -1073741593;
  HIDWORD(v15) = v11;
  RtlpQuerySecurityDescriptor(
    (int)SelfRelativeSecurityDescriptor,
    (int *)&Src,
    &v23,
    (int *)&v19,
    &v24,
    (int *)&v17,
    &v21,
    (int *)&v18,
    &v22);
  v13 = PrimaryGroupSize;
  if ( AbsoluteSecurityDescriptor
    && *AbsoluteSecurityDescriptorSize >= 0x14
    && v23 <= *OwnerSize
    && (v13 = PrimaryGroupSize, v21 <= *DaclSize)
    && v22 <= *SaclSize
    && v24 <= *PrimaryGroupSize )
  {
    LODWORD(v15) = 20;
    memmove(AbsoluteSecurityDescriptor, SelfRelativeSecurityDescriptor, v15);
    v14 = (unsigned __int8 *)Src;
    *((_DWORD *)AbsoluteSecurityDescriptor + 1) = 0;
    *((_DWORD *)AbsoluteSecurityDescriptor + 2) = 0;
    *((_DWORD *)AbsoluteSecurityDescriptor + 3) = 0;
    *((_DWORD *)AbsoluteSecurityDescriptor + 4) = 0;
    *((_WORD *)AbsoluteSecurityDescriptor + 1) &= ~0x8000u;
    if ( v14 )
    {
      LODWORD(v16) = 4 * v14[1] + 8;
      memmove(Owner, v14, v16);
      *((_DWORD *)AbsoluteSecurityDescriptor + 1) = Owner;
    }
    if ( v19 )
    {
      LODWORD(v16) = 4 * *((unsigned __int8 *)v19 + 1) + 8;
      memmove(PrimaryGroup, v19, v16);
      *((_DWORD *)AbsoluteSecurityDescriptor + 2) = PrimaryGroup;
    }
    if ( v18 )
    {
      LODWORD(v16) = *((unsigned __int16 *)v18 + 1);
      memmove(Sacl, v18, v16);
      *((_DWORD *)AbsoluteSecurityDescriptor + 3) = Sacl;
    }
    if ( v17 )
    {
      LODWORD(v16) = *((unsigned __int16 *)v17 + 1);
      memmove(Dacl, v17, v16);
      *((_DWORD *)AbsoluteSecurityDescriptor + 4) = Dacl;
    }
    return 0;
  }
  else
  {
    *AbsoluteSecurityDescriptorSize = 20;
    *v13 = v24;
    *OwnerSize = v23;
    *SaclSize = v22;
    *DaclSize = v21;
    return -1073741789;
  }
}
