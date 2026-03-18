/*
 * XREFs of ?DelegateMoveSizeToShell@@YGXPAUtagWND@@I@Z @ 0x185481
 * Callers:
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 * Callees:
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _AdjustPwndPtiPqForDelegation@24 @ 0x47910 (_AdjustPwndPtiPqForDelegation@24.c)
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?TrackedWindowMoveSizeIntercept@NotifyShell@@YGXPAUtagWND@@IK@Z @ 0xF4EDE (-TrackedWindowMoveSizeIntercept@NotifyShell@@YGXPAUtagWND@@IK@Z.c)
 */

void __fastcall DelegateMoveSizeToShell(int a1, int a2)
{
  int *v2; // ebx
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // esi
  int v6; // edx
  int v7; // edi
  int v8; // ecx
  int v9; // edx
  _DWORD *v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // ecx
  int *v19; // esi
  int v20; // ecx
  int v21; // esi
  int v22; // ecx
  _DWORD *v23; // esi
  _DWORD *v24; // esi
  int i; // ecx
  int v26; // esi
  int j; // ecx
  int v28; // esi
  int k; // ecx
  struct tagWND *v30; // [esp+0h] [ebp-118h]
  unsigned int v31; // [esp+4h] [ebp-114h]
  unsigned int v32; // [esp+8h] [ebp-110h]
  int v33[26]; // [esp+10h] [ebp-108h] BYREF
  int v34; // [esp+78h] [ebp-A0h]
  unsigned int v35; // [esp+7Ch] [ebp-9Ch]
  _DWORD v36[2]; // [esp+80h] [ebp-98h] BYREF
  int v37; // [esp+88h] [ebp-90h]
  int v38; // [esp+8Ch] [ebp-8Ch]
  int v39; // [esp+90h] [ebp-88h] BYREF
  int v40; // [esp+94h] [ebp-84h]
  int *v41; // [esp+98h] [ebp-80h] BYREF
  int v42; // [esp+9Ch] [ebp-7Ch] BYREF
  _DWORD *v43; // [esp+A0h] [ebp-78h] BYREF
  char v44; // [esp+A7h] [ebp-71h]
  _BYTE v45[108]; // [esp+A8h] [ebp-70h] BYREF

  v34 = a2;
  v2 = (int *)a1;
  v41 = (int *)a1;
  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 8);
  v42 = v4;
  v39 = v4;
  v5 = *(_DWORD **)(v3 + 200);
  if ( !a2 || (v44 = 1, a2 == 10) )
    v44 = 0;
  v6 = v5[2];
  v40 = 0;
  if ( *(_DWORD *)(v4 + 236) != *(_DWORD *)(v6 + 236) )
    *(_DWORD *)(v6 + 264) |= 0x20u;
  if ( v44 )
  {
    if ( (*(_DWORD *)(*(_DWORD *)(v4 + 236) + 284) & 0x1800000) != 0 )
    {
      v7 = (unsigned __int16)word_275248;
      if ( CTouchProcessor::ThreadHasPrimaryCapture(_gpTouchProcessor, (struct tagTHREADINFO *const)v4, word_275248) )
        v40 = v7;
    }
    else
    {
      v40 = 1;
    }
    qmemcpy(v45, INPUTDEST_FROM_PWND(v5, v33), 0x68u);
    ForceCapture(1, v45);
    v36[0] = 0;
    v36[1] = 0;
    SetSystemInputSource(v36);
    v8 = v42;
    v42 = 0;
    v9 = *(unsigned __int16 *)(v8 + 416) | (*(unsigned __int16 *)(v8 + 420) << 16);
    v43 = *(_DWORD **)(v8 + 236);
    v35 = v9;
    if ( AdjustPwndPtiPqForDelegation((int *)&v43, (int *)&v41, &v39, 514, (int)v36, &v42) )
    {
      v10 = v43;
      v11 = v43[16];
      if ( v11 )
        v12 = *(_DWORD *)(v11 + 8);
      else
        v12 = 0;
      if ( v12 )
        v37 = v12 + 216;
      else
        v37 = gObjDummyLock;
      v13 = v43[12];
      if ( v13 )
        v38 = v13 + 216;
      else
        v38 = gObjDummyLock;
      v14 = v43[13];
      if ( v14 )
        v15 = (_DWORD *)(v14 + 216);
      else
        v15 = (_DWORD *)gObjDummyLock;
      v2 = v41;
      v16 = gpsiLock;
      v17 = 3;
      v43 = v15;
      while ( v17 )
      {
        v16 += 4;
        --v17;
      }
      v18 = 3;
      v19 = v41 + 7;
      while ( v18 )
      {
        ++v19;
        --v18;
      }
      v20 = 3;
      v21 = v39 + 216;
      while ( v20 )
      {
        v21 += 4;
        --v20;
      }
      v22 = 3;
      v23 = v10;
      while ( v22 )
      {
        ++v23;
        --v22;
      }
      v24 = v43;
      for ( i = 3; i; --i )
        ++v24;
      v26 = v38;
      for ( j = 3; j; --j )
        v26 += 4;
      v28 = v37;
      for ( k = 3; k; --k )
        v28 += 4;
      PostInputMessage(
        *(_DWORD *)(v39 + 236),
        (int)v41,
        (struct tagQMSG *)0x202,
        0,
        v35,
        0,
        0,
        0,
        0,
        0,
        (unsigned int)v36,
        0,
        0,
        v42,
        v39);
    }
    else
    {
      v2 = v41;
    }
  }
  NotifyShell::TrackedWindowMoveSizeIntercept(v34, v2, (NotifyShell *)(unsigned __int16)v40, v30, v31, v32);
}
