/*
 * XREFs of _lambda_9058ab511b3899de936a0f37fc55bd19_::operator() @ 0x1800BAA5C
 * Callers:
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800BABA0 (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall lambda_9058ab511b3899de936a0f37fc55bd19_::operator()(_QWORD *a1)
{
  __int64 v2; // rax
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = *a1;
  v3 = *(CBaseObject **)(*a1 + 16LL);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *(_QWORD *)(*a1 + 16LL) = 0LL;
    v2 = *a1;
  }
  v4 = *(CBaseObject **)(v2 + 48);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *(_QWORD *)(*a1 + 48LL) = 0LL;
  }
  v5 = (__int64 *)a1[1];
  v6 = *v5;
  *v5 = 0LL;
  *(_QWORD *)(*a1 + 16LL) = v6;
  v7 = (__int64 *)a1[2];
  v8 = *v7;
  *v7 = 0LL;
  *(_QWORD *)(*a1 + 48LL) = v8;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
}
