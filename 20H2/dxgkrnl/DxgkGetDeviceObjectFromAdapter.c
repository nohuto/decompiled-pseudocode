/*
 * XREFs of DxgkGetDeviceObjectFromAdapter @ 0x1C02164E0
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C02D4700 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0018834 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C020A690 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 */

__int64 __fastcall DxgkGetDeviceObjectFromAdapter(unsigned int a1, __int64 a2, _QWORD *a3)
{
  struct DXGADAPTER *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  void *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rax
  struct DXGADAPTER *v11[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGADAPTER *v13; // [rsp+38h] [rbp-20h]
  char v14; // [rsp+40h] [rbp-18h]

  v11[0] = 0LL;
  if ( a1 && (DXGADAPTER_REFERENCE::AssignByHandle(v11, a1), (v4 = v11[0]) != 0LL) )
  {
    v13 = v11[0];
    v14 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
    v7 = (void *)*((_QWORD *)v4 + 27);
    *a3 = v7;
    if ( v7 )
    {
      ObfReferenceObject(v7);
      v8 = 0;
    }
    else
    {
      v9 = WdLogNewEntry5_WdWarning(0LL, v5, v6);
      *(_QWORD *)(v9 + 24) = v4;
      v8 = -1073741130;
      *(_QWORD *)(v9 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v9);
    }
    if ( v14 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
  }
  else
  {
    v8 = -1073741275;
  }
  DXGADAPTER_REFERENCE::Assign(v11, 0LL);
  return v8;
}
