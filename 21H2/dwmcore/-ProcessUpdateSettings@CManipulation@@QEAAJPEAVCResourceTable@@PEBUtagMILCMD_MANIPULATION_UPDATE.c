/*
 * XREFs of ?ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATESETTINGS@@@Z @ 0x1801D4974
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?_UpdateInertiaEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z @ 0x1801D605C (-_UpdateInertiaEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z.c)
 */

__int64 __fastcall CManipulation::ProcessUpdateSettings(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATION_UPDATESETTINGS *a3)
{
  int v3; // eax
  char v4; // si
  const struct tagMILCMD_MANIPULATION_UPDATESETTINGS *v5; // rdi
  int v6; // eax
  char v7; // al
  int v8; // edx
  char v9; // si
  int v10; // eax
  char v11; // bp
  char updated; // bl
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rcx
  char v19; // r11

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0;
  v5 = a3;
  if ( *((_DWORD *)this + 112) != v3 )
  {
    *((_DWORD *)this + 112) = v3;
    v4 = 1;
  }
  v6 = *((_DWORD *)a3 + 4);
  if ( *((_DWORD *)this + 114) == v6 )
  {
    v7 = 0;
  }
  else
  {
    *((_DWORD *)this + 114) = v6;
    v7 = 1;
  }
  v8 = *((_DWORD *)a3 + 5);
  if ( *((_DWORD *)this + 116) == v8 )
  {
    v9 = v7 | v4;
  }
  else
  {
    *((_DWORD *)this + 116) = v8;
    v9 = 1;
  }
  v10 = *((_DWORD *)a3 + 6);
  if ( *((_DWORD *)this + 118) == v10 )
  {
    v11 = 0;
  }
  else
  {
    *((_DWORD *)this + 118) = v10;
    v11 = 1;
  }
  LOBYTE(a3) = *((_BYTE *)a3 + 12) != 0;
  updated = CManipulation::_UpdateInertiaEnabled(this, 0LL, a3);
  LOBYTE(v13) = *((_BYTE *)v5 + 13) != 0;
  CManipulation::_UpdateInertiaEnabled(v14, 1LL, v13);
  LOBYTE(v15) = *((_BYTE *)v5 + 14) != 0;
  v17 = CManipulation::_UpdateInertiaEnabled(v16, 2LL, v15);
  if ( (unsigned __int8)v11 | (unsigned __int8)(updated | v19 | v9 | v17) )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v18 + 72LL))(v18, 10LL, v18);
  return 0LL;
}
