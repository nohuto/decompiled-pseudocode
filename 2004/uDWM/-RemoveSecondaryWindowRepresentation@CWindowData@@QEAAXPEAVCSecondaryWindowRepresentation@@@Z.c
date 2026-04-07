/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180014358
 * Callers:
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x180014C88 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026264 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800144A4 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x1800936F8 (McTemplateU0pp_EtwEventWriteTransfer.c)
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
    DynArray<CWindowData *,0>::Remove((char *)this + 432, &v7);
  }
  LOBYTE(a4) = 1;
  CWindowData::RemoveSecondaryWindowRepresentation(v6, a2, DWORD2(v6), a4);
}
