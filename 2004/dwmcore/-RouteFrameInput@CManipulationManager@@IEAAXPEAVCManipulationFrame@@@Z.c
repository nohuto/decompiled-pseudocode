/*
 * XREFs of ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180225734
 * Callers:
 *     ?RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18022569C (-RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1802228CC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z @ 0x180223150 (-CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1802237F0 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z @ 0x180225A74 (-RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180225F08 (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CManipulationManager::RouteFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  CManipulationManager *v3; // r13
  int v4; // r14d
  __int64 v5; // rax
  char v6; // si
  bool v7; // si
  unsigned int v8; // eax
  unsigned int v9; // edi
  bool v10; // cf
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r12
  void *v16; // r14
  unsigned int v17; // r13d
  int v18; // edi
  __int64 v19; // r15
  char v20; // al
  int v21; // [rsp+40h] [rbp-88h]
  int v22; // [rsp+44h] [rbp-84h] BYREF
  int v23; // [rsp+48h] [rbp-80h] BYREF
  void *v24; // [rsp+50h] [rbp-78h] BYREF
  void *v25; // [rsp+58h] [rbp-70h]
  bool v27; // [rsp+E0h] [rbp+18h]
  unsigned int v28; // [rsp+E8h] [rbp+20h]

  v3 = this;
  v4 = 0;
  v21 = 0;
  v5 = 280LL;
  if ( *((_DWORD *)a2 + 40) != 5 )
    v5 = 272LL;
  if ( *(_QWORD *)((char *)this + v5) - *((_QWORD *)a2 + 30) > *((_QWORD *)this + 37) )
  {
    *((_BYTE *)a2 + 72) |= 2u;
    CManipulationManager::TargetFrameInput(this, a2);
  }
  v6 = *((_BYTE *)a2 + 72);
  if ( (v6 & 1) != 0 && !CManipulationFrame::IsMousewheelFrame(a2) )
  {
    v7 = (v6 & 4) != 0;
    v8 = *((_DWORD *)a2 + 4);
LABEL_8:
    v9 = 0;
    v28 = 0;
    v27 = v7;
LABEL_9:
    v10 = v9 < v8;
    while ( v10 )
    {
      v11 = 248LL * v9;
      v23 = v7;
      if ( (*((_BYTE *)a2 + v11 + 400) & 1) == v23
        && *(_DWORD *)((char *)a2 + v11 + 168)
        && !*(_DWORD *)((char *)a2 + v11 + 392) )
      {
        if ( *(_QWORD *)((char *)a2 + v11 + 184) == -1LL || CManipulationManager::CheckForBufferedDescendant(v3, a2, v9) )
        {
          v21 = ++v4;
        }
        else
        {
          AcquireSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
          dword_1803458F8 = GetCurrentThreadId();
          v15 = 0LL;
          v16 = *(void **)((char *)a2 + v11 + 184);
          v25 = v16;
          v17 = v9;
          v18 = v23;
          while ( v17 < *((_DWORD *)a2 + 4) )
          {
            v19 = 248LL * v17;
            if ( *(void **)((char *)a2 + v19 + 184) == v16
              && (*((_BYTE *)a2 + v19 + 400) & 1) == v18
              && *(_DWORD *)((char *)a2 + v19 + 168) )
            {
              CManipulationManager::s_rgPointerIds[v15] = *(_DWORD *)((char *)a2 + v19 + 164);
              v15 = (unsigned int)(v15 + 1);
              *(_DWORD *)((char *)a2 + v19 + 168) = 0;
              if ( (unsigned int)dword_180342EF0 > 4
                && (qword_180342F00 & 2) != 0
                && (qword_180342F08 & 2) == qword_180342F08 )
              {
                v24 = v16;
                v23 = *(_DWORD *)((char *)a2 + v19 + 164);
                v22 = *((_DWORD *)a2 + 6);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                  v12,
                  byte_1802E863B,
                  v13,
                  v14,
                  (__int64)&v22,
                  (__int64)&v23,
                  (__int64)&v24);
              }
              InputTraceLogging::GestureTargeting::RoutePointer(
                *((_QWORD *)a2 + 30),
                *((_QWORD *)a2 + 4),
                *((_DWORD *)a2 + 6),
                *(_DWORD *)((char *)a2 + v19 + 164),
                v16);
            }
            ++v17;
          }
          v22 = v15;
          v9 = v28;
          v7 = v27;
          v4 = v21;
          v3 = this;
          SetManipulationInputTarget(
            *((unsigned int *)a2 + 6),
            v25,
            (unsigned int)v15,
            CManipulationManager::s_rgPointerIds);
          *((_DWORD *)a2 + 5) += v15;
          dword_1803458F8 = 0;
          ReleaseSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
        }
      }
      v28 = ++v9;
      v8 = *((_DWORD *)a2 + 4);
      v10 = v9 < v8;
      if ( v9 == v8 )
      {
        if ( !v7 )
          goto LABEL_9;
        v7 = 0;
        goto LABEL_8;
      }
    }
    v20 = *((_BYTE *)a2 + 72) & 0xFE;
    *((_BYTE *)a2 + 72) = v20;
    if ( !v4 )
      *((_BYTE *)a2 + 72) = v20 & 0xFB;
  }
}
