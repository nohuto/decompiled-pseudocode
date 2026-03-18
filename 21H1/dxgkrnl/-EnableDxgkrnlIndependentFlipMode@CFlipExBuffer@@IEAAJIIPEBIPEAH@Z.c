/*
 * XREFs of ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C001D268
 * Callers:
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z @ 0x1C001D1D0 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z.c)
 * Callees:
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C0005000 (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     DxgkSetIndependentFlipMode @ 0x1C0160624 (DxgkSetIndependentFlipMode.c)
 */

__int64 __fastcall CFlipExBuffer::EnableDxgkrnlIndependentFlipMode(
        CFlipExBuffer *this,
        int a2,
        unsigned int a3,
        const unsigned int *a4,
        int *a5)
{
  unsigned int v5; // edi
  NTSTATUS v10; // ebp
  CBufferRealization *v11; // rcx
  __int64 v12; // rcx
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  v5 = 0;
  v10 = -1073741275;
  if ( *((_DWORD *)this + 60) )
  {
    v11 = (CBufferRealization *)(*((_QWORD *)this + 28) - 8LL);
    Handle = 0LL;
    v10 = CBufferRealization::OpenDxSurfaceHandle(v11, 0, 1u, &Handle);
    if ( v10 >= 0 )
    {
      v10 = DxgkSetIndependentFlipMode(Handle, a2, a3, (__int64)a4, (__int64)a5, (__int64)this + 480);
      if ( v10 < 0 )
      {
        ObCloseHandle(Handle, 0);
      }
      else
      {
        *((_QWORD *)this + 61) = Handle;
        *((_DWORD *)this + 88) = 1;
        *((_DWORD *)this + 140) = a3;
        *((_DWORD *)this + 141) = a2;
        memset((char *)this + 496, 0, 0x40uLL);
        for ( ; a3; a3 >>= 1 )
        {
          if ( (a3 & 1) != 0 )
          {
            v12 = v5++;
            *((_DWORD *)this + v12 + 124) = a4[v12];
          }
        }
      }
    }
  }
  return (unsigned int)v10;
}
