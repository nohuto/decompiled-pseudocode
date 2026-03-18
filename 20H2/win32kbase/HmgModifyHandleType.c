/*
 * XREFs of HmgModifyHandleType @ 0x1C001F0B0
 * Callers:
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C001EE20 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgLockAndModifyHandleType @ 0x1C001F040 (HmgLockAndModifyHandleType.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C00CE94C (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     bInitBRUSHOBJ @ 0x1C02911B0 (bInitBRUSHOBJ.c)
 * Callees:
 *     EtwTraceGdiTransformHandle @ 0x1C001F1BC (EtwTraceGdiTransformHandle.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C003EAF0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgModifyHandleType(__int64 a1)
{
  GdiHandleManager *v1; // rbx
  unsigned int v3; // edi
  unsigned int v4; // eax
  __int64 v5; // r14
  struct _ENTRY *Entry; // rbp
  unsigned int v7; // eax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rbx
  unsigned int v10; // r9d
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int EtwGdiHandleType; // eax
  __int64 result; // rax

  v1 = gpHandleManager;
  v3 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v4 = GdiHandleManager::DecodeIndex(gpHandleManager, v3);
  v5 = *((_QWORD *)v1 + 2);
  Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v5, v4, 0);
  v7 = GdiHandleManager::DecodeIndex(v1, v3);
  v9 = 0LL;
  v10 = *(_DWORD *)(v5 + 2056);
  v11 = v7;
  v12 = v10 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16);
  if ( v7 < (unsigned int)v12 )
  {
    v8 = 1LL;
    if ( v7 >= v10 )
      v12 = ((v7 - v10) >> 16) + 1;
    else
      v12 = 0LL;
    v13 = *(_QWORD *)(v5 + 8LL * (unsigned int)v12 + 8);
    if ( (_DWORD)v12 )
    {
      v8 = ((1 - (_DWORD)v12) << 16) - v10;
      v11 = (unsigned int)(v8 + v11);
    }
    if ( (unsigned int)v11 < *(_DWORD *)(v13 + 20) )
    {
      v8 = (unsigned __int64)(unsigned int)v11 >> 8;
      v12 = 2LL * (unsigned __int8)v11;
      v9 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * v8) + 16LL * (unsigned __int8)v11 + 8);
    }
  }
  LOBYTE(v12) = *((_BYTE *)Entry + 14);
  EtwGdiHandleType = GetEtwGdiHandleType(v12, v8, v11, *((_DWORD *)Entry + 2) & 0xFFFFFFFE);
  EtwTraceGdiTransformHandle(*v9, a1, EtwGdiHandleType);
  *((_WORD *)Entry + 6) = WORD1(a1);
  result = a1;
  *v9 = a1;
  return result;
}
