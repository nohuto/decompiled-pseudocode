/*
 * XREFs of ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C001EF48
 * Callers:
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003B020 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 * Callees:
 *     EtwTraceGdiTransformHandle @ 0x1C001F1BC (EtwTraceGdiTransformHandle.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C003EAF0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0044450 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall GdiHandleManager::_IncrementOrDecrementUniqueness(GdiHandleManager *this, struct OBJECT *a2, char a3)
{
  __int64 v3; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _ENTRY *EntryFromObject; // r10
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  unsigned int EtwGdiHandleType; // eax
  __int64 v19; // rdx

  v3 = *(_QWORD *)a2;
  v7 = GdiHandleManager::DecodeIndex(
         this,
         (unsigned __int16)*(_QWORD *)a2 | ((unsigned int)*(_QWORD *)a2 >> 8) & 0xFF0000);
  EntryFromObject = GdiHandleManager::GetEntryFromObject(this, a2);
  if ( (unsigned int)v7 >= 0x10000 || *(_DWORD *)this > 0x10000u )
  {
    LOBYTE(v9) = *((_BYTE *)EntryFromObject + 14);
    EtwGdiHandleType = GetEtwGdiHandleType(v9, v8, v10, *((_DWORD *)EntryFromObject + 2) & 0xFFFFFFFE);
    v19 = v3;
  }
  else
  {
    LOBYTE(v9) = *((_BYTE *)EntryFromObject + 13);
    v12 = (unsigned int)(v9 - 1);
    LOBYTE(v9) = v9 + 1;
    if ( !a3 )
      LOBYTE(v9) = v12;
    *((_BYTE *)EntryFromObject + 13) = v9;
    v13 = v7 | ((unsigned __int64)*((unsigned __int16 *)EntryFromObject + 6) << 16);
    *(_QWORD *)a2 = v13;
    v14 = *((_DWORD *)EntryFromObject + 2) & 0xFFFFFFFE;
    v15 = *(_QWORD *)EntryFromObject & 0xFFFFFFFFFF000000uLL | ((unsigned int)v13 >> 8) & 0xFF0000;
    v16 = (unsigned __int16)v13;
    LOBYTE(v13) = *((_BYTE *)EntryFromObject + 14);
    v17 = v16 | v15;
    *(_QWORD *)EntryFromObject = v17;
    EtwGdiHandleType = GetEtwGdiHandleType(v13, v12, v17, v14);
    v19 = *(_QWORD *)a2;
  }
  EtwTraceGdiTransformHandle(v3, v19, EtwGdiHandleType);
}
