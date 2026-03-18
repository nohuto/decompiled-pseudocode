/*
 * XREFs of ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C001BF2C
 * Callers:
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C001BBC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyOnFlip(VIDMM_GLOBAL *this)
{
  int v2; // ecx
  unsigned int v3; // edx
  __int64 v4; // rcx
  REGHANDLE EtwHandle; // rax
  bool v6; // zf

  v2 = *((_DWORD *)this + 1976);
  if ( *((_QWORD *)this + 987) > (unsigned __int64)qword_1C006E390 )
  {
    v3 = v2 + dword_1C006E39C;
    *((_DWORD *)this + 1976) = v2 + dword_1C006E39C;
    if ( v3 > dword_1C006E398
      && MEMORY[0xFFFFF78000000014] - *((_QWORD *)this + 989) > (unsigned __int64)qword_1C006E3A0 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v6 = bTracingEnabled == 0;
      *((_QWORD *)this + 989) = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)this + 1976) = 0;
      if ( !v6 && (byte_1C006E941 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, &EventPerformanceWarning);
    }
  }
  else if ( v2 )
  {
    *((_DWORD *)this + 1976) = v2 - 1;
  }
  _InterlockedExchange64((volatile __int64 *)this + 987, 0LL);
}
