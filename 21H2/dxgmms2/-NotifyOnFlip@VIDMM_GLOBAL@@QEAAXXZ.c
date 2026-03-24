/*
 * XREFs of ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C000FE68
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000EB20 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002F5D0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyOnFlip(VIDMM_GLOBAL *this)
{
  int v2; // ecx
  unsigned int v3; // edx
  __int64 v4; // rcx
  REGHANDLE EtwHandle; // rax
  bool v6; // zf

  v2 = *((_DWORD *)this + 1974);
  if ( *((_QWORD *)this + 986) > (unsigned __int64)qword_1C0050320 )
  {
    v3 = v2 + dword_1C005032C;
    *((_DWORD *)this + 1974) = v2 + dword_1C005032C;
    if ( v3 > dword_1C0050328
      && MEMORY[0xFFFFF78000000014] - *((_QWORD *)this + 988) > (unsigned __int64)qword_1C0050330 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v6 = bTracingEnabled == 0;
      *((_QWORD *)this + 988) = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)this + 1974) = 0;
      if ( !v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, &EventPerformanceWarning);
    }
  }
  else if ( v2 )
  {
    *((_DWORD *)this + 1974) = v2 - 1;
  }
  _InterlockedExchange64((volatile __int64 *)this + 986, 0LL);
}
