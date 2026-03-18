/*
 * XREFs of ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C001AE00
 * Callers:
 *     ??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0156458 (--0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1C018EC94 (--0DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGFASTMUTEX::DXGFASTMUTEX(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 28) = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  result = a1;
  *(_DWORD *)(a1 + 32) = a3;
  return result;
}
