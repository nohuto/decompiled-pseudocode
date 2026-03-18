/*
 * XREFs of ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C001A520
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00189F0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C013FDB0 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00471A0 (HmgIncrementShareReferenceCount.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CEC10 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::vDisableSurface(__int64 *a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  int v7; // eax
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  if ( (*(_DWORD *)(*a1 + 40) & 0x80000) == 0 && qword_1C024F5E8 )
    qword_1C024F5E8(v3);
  if ( qword_1C024F6B0 )
    v7 = qword_1C024F6B0();
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C024F6B8 )
    qword_1C024F6B8(*a1, a2);
  result = *a1;
  v9 = *(_QWORD *)(*a1 + 2552);
  if ( !v9 || !a3 )
  {
    *(_QWORD *)(result + 2552) = 0LL;
    return result;
  }
  v11 = *(_QWORD *)(*a1 + 2552);
  HmgIncrementShareReferenceCount(v11);
  HmgDecrementShareReferenceCountEx(*(_QWORD *)(*a1 + 2552), 0LL);
  *(_QWORD *)(*a1 + 2552) = 0LL;
  if ( (*(_DWORD *)(v3 + 40) & 0x8000) != 0 && a2 )
  {
    result = SURFREF::bDeleteSurface(&v11, a2);
    v10 = v11;
  }
  else
  {
    HmgDecrementShareReferenceCountEx(v9, 0LL);
    result = *(_QWORD *)(v3 + 2720);
    v10 = 0LL;
    if ( !result )
      return result;
    result = ((__int64 (__fastcall *)(_QWORD))result)(*(_QWORD *)(*a1 + 1800));
  }
  if ( v10 )
    return HmgDecrementShareReferenceCountEx(v10, 0LL);
  return result;
}
