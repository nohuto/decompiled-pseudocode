/*
 * XREFs of ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x14003D380
 * Callers:
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140007180 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14003BFDC (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14003E8B0 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140044150 (-AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000FFA0 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x14001779C (-SetHandle@CConnectionInstance@@QEAAJ_K@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1400336CC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140039F08 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPipeInstance::ResolvePendingConnections(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v4; // rdi
  CConnectionInstance *v9; // rcx
  _QWORD **v10; // rsi
  __int64 *v11; // rbx
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  bool v16; // zf
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (__int64 *)a1[32];
  while ( v4 )
  {
    v9 = (CConnectionInstance *)v4[2];
    v10 = (_QWORD **)(v4 + 1);
    v11 = v4;
    v4 = (__int64 *)v4[1];
    if ( *((_QWORD *)v9 + 1) == a2 )
    {
      v12 = CConnectionInstance::SetHandle(v9, a3);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          4549LL,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v12);
      if ( a4 == 1 )
      {
        v13 = a1 + 31;
        v14 = *v11;
        if ( v11 == (__int64 *)a1[31] )
          *v13 = v14;
        else
          **v10 = v14;
        v15 = *v10;
        if ( v11 == (__int64 *)a1[32] )
          a1[32] = v15;
        else
          *(_QWORD *)(*v11 + 8) = v15;
        *v11 = a1[35];
        v16 = a1[33]-- == 1LL;
        a1[35] = v11;
        if ( v16 )
          ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll((__int64)v13);
      }
    }
  }
  return 0LL;
}
