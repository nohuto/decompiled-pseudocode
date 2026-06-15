/*
 * XREFs of ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x1800571D0
 * Callers:
 *     ??0AudioDeviceMgr@@IEAA@XZ @ 0x180056CC8 (--0AudioDeviceMgr@@IEAA@XZ.c)
 *     ??0EndpointCollection@@IEAA@XZ @ 0x180056F04 (--0EndpointCollection@@IEAA@XZ.c)
 *     ??0CConstraintModelResourceManager@@AEAA@XZ @ 0x180057024 (--0CConstraintModelResourceManager@@AEAA@XZ.c)
 *     ??0PhoneTopology@@IEAA@XZ @ 0x180057108 (--0PhoneTopology@@IEAA@XZ.c)
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x1800582EC (--0PhoneCallAudio@@IEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800114E8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
ATL::CComAutoCriticalSection *__fastcall ATL::CComAutoCriticalSection::CComAutoCriticalSection(
        ATL::CComAutoCriticalSection *this)
{
  int v2; // eax

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v2 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)this);
  if ( v2 < 0 )
    ATL::AtlThrowImpl(v2);
  return this;
}
