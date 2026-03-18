/*
 * XREFs of ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0046658
 * Callers:
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00465B8 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C018BA90 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CEnsureCurrentDxgProcess::AttachToProcess(CEnsureCurrentDxgProcess *this, struct DXGPROCESS *a2)
{
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v5; // r8
  int v6; // edx
  int v7; // r8d
  __int64 result; // rax

  Current = DXGTHREAD::GetCurrent();
  *((_QWORD *)this + 1) = Current;
  v5 = Current;
  if ( Current )
  {
    *(_QWORD *)this = *((_QWORD *)Current + 3);
    result = 0LL;
    *((_QWORD *)v5 + 3) = a2;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          (unsigned int)L"Failed to create object: 0xI64x",
          v6,
          v7,
          0,
          0,
          -1,
          (__int64)L"Failed to create object: 0xI64x",
          -1073741801LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    return 3221225495LL;
  }
  return result;
}
