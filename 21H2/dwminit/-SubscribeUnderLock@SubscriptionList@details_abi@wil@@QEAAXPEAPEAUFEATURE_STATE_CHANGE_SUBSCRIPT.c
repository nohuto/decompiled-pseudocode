/*
 * XREFs of ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180005580
 * Callers:
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x180005E40 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180006780 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800040C4 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::SubscribeUnderLock(
        wil::details_abi::SubscriptionList *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  wil::details_abi::heap_buffer *v4; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v9; // r10
  _QWORD *v10; // rdx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v11; // r8
  __int64 v12; // rax
  _QWORD Source[3]; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  v4 = (wil::details_abi::SubscriptionList *)((char *)this + 40);
  v5 = (_QWORD *)*((_QWORD *)this + 5);
  v6 = 0LL;
  v9 = (*((_QWORD *)v4 + 1) - (_QWORD)v5) >> 4;
  if ( v9 )
  {
    v10 = v5;
    while ( 1 )
    {
      v11 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(v6 + 1);
      if ( !*v10 )
        break;
      v10 += 2;
      ++v6;
      if ( (unsigned __int64)v11 >= v9 )
        goto LABEL_5;
    }
    v12 = 2 * v6;
    v5[v12] = a3;
    v5[v12 + 1] = a4;
    *a2 = v11;
  }
  else
  {
LABEL_5:
    Source[0] = a3;
    Source[1] = a4;
    if ( wil::details_abi::heap_buffer::push_back(v4, Source, 0x10uLL) )
      *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((*((_QWORD *)v4 + 1) - *(_QWORD *)v4) >> 4);
  }
}
