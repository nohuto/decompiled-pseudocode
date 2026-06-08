/*
 * XREFs of ValidateAcpiCPC @ 0x1C002A984
 * Callers:
 *     InitAcpiCpc @ 0x1C0021EB8 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     CpcRegisterIsSupportedEx @ 0x1C0003E0C (CpcRegisterIsSupportedEx.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0004C9C (WPP_RECORDER_SF_DD.c)
 *     ValidateAcpiCPCRegister @ 0x1C002AAFC (ValidateAcpiCPCRegister.c)
 */

__int64 __fastcall ValidateAcpiCPC(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // esi
  bool v6; // cc
  __int64 result; // rax
  _BYTE *v8; // rdi
  unsigned int v9; // ebp
  _BYTE *v10; // rcx

  v3 = a1[1];
  if ( v3 == 1 )
  {
    a2 = *a1;
    if ( (_DWORD)a2 != 17 )
      goto LABEL_10;
  }
  v5 = 21;
  if ( v3 == 2 )
  {
    a2 = *a1;
    if ( (_DWORD)a2 != 21 )
      goto LABEL_10;
  }
  v6 = v3 <= 3;
  if ( v3 == 3 )
  {
    a2 = *a1;
    if ( (_DWORD)a2 != 23 )
      goto LABEL_10;
    v6 = 1;
  }
  if ( !v6 )
  {
    a2 = *a1;
    if ( (unsigned int)a2 < 0x17 )
    {
LABEL_10:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x33u,
          (__int64)&WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids,
          KeGetPcr()->Prcb.Number,
          a2);
      return 3221225473LL;
    }
  }
  if ( v3 == 1 )
  {
    v5 = 15;
    v8 = &unk_1C000F241;
  }
  else if ( v3 == 2 )
  {
    v5 = 19;
    v8 = &unk_1C000F071;
  }
  else
  {
    v8 = &unk_1C000F3B1;
  }
  v9 = 0;
  while ( 1 )
  {
    LOBYTE(a3) = *v8;
    LOBYTE(a2) = *(v8 - 1);
    result = ValidateAcpiCPCRegister((char *)a1 + *(unsigned int *)(v8 - 17), a2, a3, *(_QWORD *)(v8 - 9));
    if ( (int)result < 0 )
      break;
    ++v9;
    v8 += 24;
    if ( v9 >= v5 )
    {
      if ( CpcRegisterIsSupportedEx((__int64)(a1 + 32)) || *v10 == 126 || *(_QWORD *)(a1 + 33) == 1LL )
        return 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x34u,
          (__int64)&WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids,
          KeGetPcr()->Prcb.Number);
      return 3221225473LL;
    }
  }
  return result;
}
