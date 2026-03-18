/*
 * XREFs of ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x1C0057434
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C03304A4 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

struct VISTABLTSTUBINFO *__fastcall DXGDEVICE::GetVistaBltStubInfo(DXGDEVICE *this, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d

  if ( a2 )
  {
    if ( !*((_QWORD *)this + 239) )
    {
      v5 = operator new[](0x10uLL, 0x4B677844u, 256LL, a4);
      *((_QWORD *)this + 239) = v5;
      if ( !v5 )
      {
        WdLogSingleEntry1(6LL, 1087LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v7,
              v6,
              v8,
              0LL,
              1,
              -1,
              L"Failed to allocate Vista BLT stub info",
              1087LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
    }
  }
  return (struct VISTABLTSTUBINFO *)*((_QWORD *)this + 239);
}
