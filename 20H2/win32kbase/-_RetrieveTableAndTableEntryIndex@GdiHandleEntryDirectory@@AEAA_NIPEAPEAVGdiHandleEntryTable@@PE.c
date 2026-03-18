/*
 * XREFs of ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C00457A0
 * Callers:
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C003EBC8 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C00460C0 (INC_SHARE_REF_CNT.c)
 *     EngLockSurface @ 0x1C00473A0 (EngLockSurface.c)
 * Callees:
 *     <none>
 */

bool __fastcall GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(
        GdiHandleEntryDirectory *this,
        unsigned int a2,
        struct GdiHandleEntryTable **a3,
        unsigned int *a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // r11d
  __int64 v6; // rbx
  bool result; // al

  v4 = a2;
  v5 = *((_DWORD *)this + 514);
  if ( a2 >= v5 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0;
  v6 = ((a2 - v5) >> 16) + 1;
  if ( a2 < v5 )
    v6 = 0LL;
  *a3 = (struct GdiHandleEntryTable *)*((_QWORD *)this + v6 + 1);
  if ( (_DWORD)v6 )
    v4 = ((1 - (_DWORD)v6) << 16) - v5 + a2;
  result = 1;
  *a4 = v4;
  return result;
}
