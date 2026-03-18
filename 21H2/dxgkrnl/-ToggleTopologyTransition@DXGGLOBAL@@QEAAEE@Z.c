/*
 * XREFs of ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C001C364
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C01DACE0 (DxgkCompleteTopologyTransition.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

bool __fastcall DXGGLOBAL::ToggleTopologyTransition(DXGGLOBAL *this, char a2)
{
  int v2; // ebx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  if ( a2 )
  {
    v2 = _InterlockedIncrement((volatile signed __int32 *)this + 226);
  }
  else
  {
    v2 = _InterlockedDecrement((volatile signed __int32 *)this + 226);
    if ( v2 < 0 )
    {
      WdLogSingleEntry1(1LL, 1560LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v5,
            v4,
            v6,
            0,
            2,
            -1,
            (__int64)L"Result >= 0",
            1560LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  return v2 != 0;
}
