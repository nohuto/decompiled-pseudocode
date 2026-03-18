/*
 * XREFs of ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C002EDD6
 * Callers:
 *     DxgkSubmitPresentToHwQueue @ 0x1C0313260 (DxgkSubmitPresentToHwQueue.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C03304A4 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00096C0 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C0183090 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C01E5974 (--0DXGPRESENT@@QEAA@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CopyPresentArgs(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        struct DXGPROCESS *a3,
        __int64 a4)
{
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  int v9; // r8d
  DXGPRESENT *v10; // rax
  int v11; // edx
  int v12; // r8d

  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_WORD *)&Value & 0x8000) != 0 )
  {
    if ( (*(_DWORD *)&Value & 0x400000) != 0 || a2->pPresentRegions )
    {
      WdLogSingleEntry4(2LL, -1073741811LL, this, a2->Flags.Value, a2->pPresentRegions);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            (unsigned int)L"ret = 0x%I64x 0x%I64x 0x%I64x 0x%I64x RedirectedFlip doesn't support Present regions.",
            a2->Flags.Value,
            v9,
            0,
            0,
            -1,
            (__int64)L"ret = 0x%I64x 0x%I64x 0x%I64x 0x%I64x RedirectedFlip doesn't support Present regions.",
            -1073741811LL,
            this,
            a2->Flags.Value,
            a2->pPresentRegions,
            0LL);
      }
      return 3221225485LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v10 = (DXGPRESENT *)*((_QWORD *)this + 19);
    if ( v10 )
      goto LABEL_17;
    v10 = (DXGPRESENT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(1648LL, (__int64)a2, (__int64)a3, a4);
    if ( v10 )
      v10 = DXGPRESENT::DXGPRESENT(v10, *(_DWORD *)(*((_QWORD *)this + 2) + 1856LL));
    *((_QWORD *)this + 19) = v10;
    if ( v10 )
    {
LABEL_17:
      *((_BYTE *)this + 442) = 1;
      return DXGPRESENT::CopyPresentArgs(v10, this, a2);
    }
    else
    {
      WdLogSingleEntry4(6LL, -1073741801LL, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL), a3, this);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          (unsigned int)L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
          v11,
          v12,
          0,
          1,
          -1,
          (__int64)L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
          -1073741801LL,
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
          a3,
          this,
          0LL);
      return 3221225495LL;
    }
  }
}
