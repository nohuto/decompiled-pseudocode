/*
 * XREFs of ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z @ 0x140050460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ??$AtlMultiply@K@ATL@@YAJPEAKKK@Z @ 0x1400503A0 (--$AtlMultiply@K@ATL@@YAJPEAKKK@Z.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Reallocate(
        ATL::CAtlStringMgr *this,
        struct ATL::CStringData *a2,
        int a3,
        unsigned int a4)
{
  signed int v4; // ebx
  __int64 v5; // r10
  __int64 v6; // r11
  struct ATL::CStringData *result; // rax
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a3 < 1 )
    return 0LL;
  v4 = (a3 + 8) & 0xFFFFFFF8;
  if ( a3 >= v4 )
    return 0LL;
  if ( (int)ATL::AtlMultiply<unsigned long>(&v8, v4, a4) < 0 )
    return 0LL;
  if ( v8 > 0xFFFFFFE7 )
    return 0LL;
  result = (struct ATL::CStringData *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v6 + 8) + 16LL))(
                                        *(_QWORD *)(v6 + 8),
                                        v5,
                                        v8 + 24);
  if ( !result )
    return 0LL;
  *((_DWORD *)result + 3) = v4 - 1;
  return result;
}
