/*
 * XREFs of ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C001E128
 * Callers:
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C0006CD0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x1C000774C (-OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ.c)
 *     ?OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x1C00077EC (-OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ.c)
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C004FFF0 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C00B3F68 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall DirectComposition::CLinearObjectTableBase::EnumerateObjects(
        DirectComposition::CLinearObjectTableBase *this,
        unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx

  v2 = *a2;
  v4 = *((_QWORD *)this + 3);
  if ( *a2 >= v4 )
    return 0LL;
  v5 = (_QWORD *)(*(_QWORD *)this + v2 * *((_QWORD *)this + 4));
  do
  {
    if ( *v5 )
      break;
    ++v2;
    v5 = (_QWORD *)((char *)v5 + *((_QWORD *)this + 4));
  }
  while ( v2 < v4 );
  if ( v2 >= v4 )
    return 0LL;
  v6 = *((_QWORD *)this + 4);
  *a2 = v2 + 1;
  return *(void **)(v2 * v6 + *(_QWORD *)this);
}
