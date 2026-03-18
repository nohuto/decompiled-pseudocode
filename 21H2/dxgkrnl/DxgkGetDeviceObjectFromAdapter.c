/*
 * XREFs of DxgkGetDeviceObjectFromAdapter @ 0x1C02C4F20
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C0392C44 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C02B9AE4 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 */

__int64 __fastcall DxgkGetDeviceObjectFromAdapter(unsigned int a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  struct DXGADAPTER *v5; // rdi
  void *v6; // rcx
  unsigned int v7; // ebx
  struct DXGADAPTER *v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[8]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGADAPTER *v11; // [rsp+38h] [rbp-20h]
  char v12; // [rsp+40h] [rbp-18h]

  v9[0] = 0LL;
  if ( a1 && (DXGADAPTER_REFERENCE::AssignByHandle(v9, a1, (__int64)a3, a4), (v5 = v9[0]) != 0LL) )
  {
    v11 = v9[0];
    v12 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
    v6 = (void *)*((_QWORD *)v5 + 27);
    *a3 = v6;
    if ( v6 )
    {
      ObfReferenceObject(v6);
      v7 = 0;
    }
    else
    {
      v7 = -1073741130;
      WdLogSingleEntry2(3LL, v5, -1073741130LL);
    }
    if ( v12 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  }
  else
  {
    v7 = -1073741275;
  }
  DXGADAPTER_REFERENCE::Assign(v9, 0LL);
  return v7;
}
