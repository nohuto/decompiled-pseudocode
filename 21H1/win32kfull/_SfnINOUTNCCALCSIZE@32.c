/*
 * XREFs of _SfnINOUTNCCALCSIZE@32 @ 0x93FEA
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ??0LeaveEnterCrit@@QAE@XZ @ 0xAEFB8 (--0LeaveEnterCrit@@QAE@XZ.c)
 *     ??1LeaveEnterCrit@@QAE@XZ @ 0xAEFC8 (--1LeaveEnterCrit@@QAE@XZ.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall SfnINOUTNCCALCSIZE(int *a1, int a2, int a3, _DWORD *a4, int a5, int a6, char a7, int a8)
{
  PKTHREAD CurrentThread; // esi
  int v9; // edi
  int *ThreadWin32Thread; // eax
  int v11; // esi
  PKTHREAD v12; // edi
  int v13; // esi
  int *v14; // eax
  int v15; // edx
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // ebx
  LeaveEnterCrit *v20; // ecx
  _DWORD *v21; // edi
  int *v22; // ecx
  int v23; // ebx
  ULONG v24; // esi
  _DWORD *v25; // edx
  void *v26; // eax
  _DWORD *v27; // edi
  int v29; // [esp+1Ch] [ebp-E0h]
  int v30; // [esp+20h] [ebp-DCh]
  int v31; // [esp+24h] [ebp-D8h]
  _DWORD *Address; // [esp+44h] [ebp-B8h]
  _DWORD v33[3]; // [esp+48h] [ebp-B4h] BYREF
  int v34; // [esp+60h] [ebp-9Ch] BYREF
  int v35; // [esp+64h] [ebp-98h]
  int v36; // [esp+68h] [ebp-94h]
  unsigned int v37; // [esp+6Ch] [ebp-90h] BYREF
  int v38; // [esp+70h] [ebp-8Ch]
  char v39; // [esp+77h] [ebp-85h] BYREF
  _DWORD *v40; // [esp+78h] [ebp-84h]
  _DWORD v41[26]; // [esp+7Ch] [ebp-80h] BYREF
  CPPEH_RECORD ms_exc; // [esp+E4h] [ebp-18h]

  v40 = a4;
  v37 = 0;
  v34 = 0;
  v33[2] = 0;
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v38 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v9 = *ThreadWin32Thread;
      v38 = *ThreadWin32Thread;
    }
  }
  if ( a1 )
    v11 = a1[5] - *(_DWORD *)(v9 + 256);
  else
    v11 = 0;
  v35 = v11;
  v36 = 100;
  memset(v41, 0, 0x64u);
  v41[0] = v11;
  v41[1] = a2;
  v41[2] = a3;
  v41[3] = a5;
  v41[4] = a6;
  if ( a3 )
  {
    qmemcpy(&v41[5], v40, 0x34u);
    qmemcpy(&v41[18], (const void *)v41[17], 0x1Cu);
    v41[17] = 0;
  }
  else
  {
    v41[5] = *v40;
    v41[6] = v40[1];
    v41[7] = v40[2];
    v41[8] = v40[3];
    v36 = 36;
  }
  v12 = KeGetCurrentThread();
  v13 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v14 = (int *)PsGetThreadWin32Thread(v12);
    if ( v14 )
      v13 = *v14;
  }
  v33[0] = *(_DWORD *)(v13 + 228);
  *(_DWORD *)(v13 + 228) = v33;
  v33[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  ms_exc.registration.TryLevel = 0;
  v15 = v38;
  v16 = *(_DWORD **)(v38 + 260);
  v29 = v16[10];
  v30 = v16[11];
  v31 = v16[12];
  v16[11] = v35;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0;
  *(_DWORD *)(*(_DWORD *)(v15 + 260) + 40) = v17;
  if ( a1 )
    v18 = *(_DWORD *)(a1[5] + 140);
  else
    v18 = 0;
  *(_DWORD *)(*(_DWORD *)(v15 + 260) + 48) = v18;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v39);
  EtwTraceBeginCallback(21);
  v19 = KeUserModeCallback(21, v41, v36, &v37, &v34);
  EtwTraceEndCallback(21);
  LeaveEnterCrit::~LeaveEnterCrit(v20);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v21 = (_DWORD *)(*(_DWORD *)(v38 + 260) + 40);
  *v21++ = v29;
  *v21 = v30;
  v21[1] = v31;
  ms_exc.registration.TryLevel = -2;
  if ( v19 < 0 || v34 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 2;
  v22 = (int *)v37;
  if ( v37 + 4 < v37 || v37 + 4 > _MmUserProbeAddress )
    v22 = (int *)_MmUserProbeAddress;
  v23 = *v22;
  ms_exc.registration.TryLevel = -2;
  if ( (!a8 || (*(_BYTE *)(a8 + 44) & 5) == 0) && (a7 & 2) == 0 )
  {
    ms_exc.registration.TryLevel = 3;
    v24 = v37;
    if ( v37 + 12 < v37 || v37 + 12 > _MmUserProbeAddress )
      v24 = _MmUserProbeAddress;
    Address = *(_DWORD **)(v24 + 8);
    ProbeForRead(Address, 0x50u, 4u);
    if ( a3 )
    {
      v25 = v40;
      v36 = v40[12];
      v26 = (void *)v36;
      qmemcpy(v40, Address, 0x34u);
      qmemcpy(v26, Address + 13, 0x1Cu);
      v25[12] = v26;
    }
    else
    {
      v27 = v40;
      *v40 = *Address;
      *++v27 = Address[1];
      *++v27 = Address[2];
      v27[1] = Address[3];
    }
    ms_exc.registration.TryLevel = -2;
  }
  return v23;
}
