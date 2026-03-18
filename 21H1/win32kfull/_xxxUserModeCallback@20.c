/*
 * XREFs of _xxxUserModeCallback@20 @ 0x1950A7
 * Callers:
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxClientLoadOLE@0 @ 0x1A75CC (_xxxClientLoadOLE@0.c)
 *     _xxxClientRevokeDragDrop@4 @ 0x1A75FE (_xxxClientRevokeDragDrop@4.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     ??0LeaveEnterCrit@@QAE@XZ @ 0xAEFB8 (--0LeaveEnterCrit@@QAE@XZ.c)
 *     ??1LeaveEnterCrit@@QAE@XZ @ 0xAEFC8 (--1LeaveEnterCrit@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall xxxUserModeCallback(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // esi
  LeaveEnterCrit *v8; // ecx
  int result; // eax
  int v10; // [esp+10h] [ebp-24h] BYREF
  int v11; // [esp+14h] [ebp-20h] BYREF
  char v12; // [esp+1Bh] [ebp-19h] BYREF

  v10 = 0;
  v11 = 0;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v12);
  EtwTraceBeginCallback(a1);
  v7 = KeUserModeCallback(a1, a2, a3, &v10, &v11);
  EtwTraceEndCallback(a1);
  LeaveEnterCrit::~LeaveEnterCrit(v8);
  if ( v7 < 0 )
    return v7;
  result = -1073741823;
  if ( !v11 )
    return v7;
  return result;
}
