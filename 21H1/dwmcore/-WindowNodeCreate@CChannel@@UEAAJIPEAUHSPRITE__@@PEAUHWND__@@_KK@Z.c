/*
 * XREFs of ?WindowNodeCreate@CChannel@@UEAAJIPEAUHSPRITE__@@PEAUHWND__@@_KK@Z @ 0x1800C5780
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800386EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180038BF4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180039020 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeCreate(
        CChannel *this,
        unsigned int a2,
        HSPRITE a3,
        HWND a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int128 v7; // rdi
  unsigned int v9; // ebx
  _DWORD v11[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v12; // [rsp+28h] [rbp-28h]
  unsigned __int64 v13; // [rsp+38h] [rbp-18h]
  unsigned int v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+44h] [rbp-Ch]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+70h] [rbp+20h] BYREF

  *((_QWORD *)&v7 + 1) = a4;
  *(_QWORD *)&v7 = a3;
  v16 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 203);
  v11[0] = 444;
  v15 = 0;
  v13 = a5;
  v14 = a6;
  v11[1] = a2;
  v12 = v7;
  v9 = CChannel::SendCommand(this, v11, 0x28u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return v9;
}
