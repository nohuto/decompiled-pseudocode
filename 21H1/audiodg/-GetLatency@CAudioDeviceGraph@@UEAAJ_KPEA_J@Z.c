/*
 * XREFs of ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x140008110
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140008210 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetLatency(CAudioDeviceGraph *this, CPipeInstance *a2, __int64 *a3)
{
  int v3; // r15d
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  _QWORD *v9; // rax
  unsigned int v10; // r14d
  __int64 v11; // rdx
  unsigned __int64 v12; // r9
  unsigned int v13; // ebp
  __int64 v14; // rdi
  int Latency; // eax
  CPipeInstance *v16; // rbx
  int v18; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  v18 = v3;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( !*((_DWORD *)this + 64) )
  {
    v10 = -2005139437;
    v11 = 555LL;
    goto LABEL_7;
  }
  if ( !a3 )
  {
    v10 = -2147467261;
    v11 = 558LL;
    goto LABEL_7;
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  v9 = (_QWORD *)*((_QWORD *)this + 21);
  if ( !v9 )
  {
LABEL_4:
    if ( v8 )
      LeaveCriticalSection(v8);
LABEL_6:
    v10 = -2005139430;
    v11 = 562LL;
LABEL_7:
    v12 = v10;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v16 = (CPipeInstance *)v9[2];
    v9 = (_QWORD *)*v9;
    if ( v16 == a2 )
      break;
    if ( !v9 )
      goto LABEL_4;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( !v16 )
    goto LABEL_6;
  v13 = 0;
  v14 = 0LL;
  while ( 1 )
  {
    Latency = CPipeInstance::GetLatency(v16, &v20);
    v10 = Latency;
    if ( Latency < 0 )
      break;
    v14 += v20;
    v16 = *(CPipeInstance **)v16;
    if ( !v16 )
    {
      *a3 = v14;
      goto LABEL_13;
    }
  }
  v12 = (unsigned int)Latency;
  v11 = 569LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)v12,
    v18);
  v13 = v10;
LABEL_13:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v13;
}
