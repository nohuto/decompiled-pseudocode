/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18002718C
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001472C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x180026C94 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180013588 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x180093018 (McTemplateU0pp_EtwEventWriteTransfer.c)
 */

void __fastcall CWindowData::RemoveSecondaryWindowRepresentation(
        CWindowData *this,
        struct CSecondaryWindowRepresentation *a2,
        __int64 a3,
        __int64 a4)
{
  __int128 v6; // [rsp+20h] [rbp-18h]
  struct CSecondaryWindowRepresentation *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v6 = *((_OWORD *)a2 + 4);
  if ( (CWindowData *)v6 != this )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pp_EtwEventWriteTransfer(this, &RemoveSecondaryWindowRepresentation_WR, a2, *((_QWORD *)this + 5));
    DynArray<CWindowData *,0>::Remove((__int64 *)this + 54, &v7);
  }
  LOBYTE(a4) = 1;
  CWindowData::RemoveSecondaryWindowRepresentation(v6, a2, DWORD2(v6), a4);
}
