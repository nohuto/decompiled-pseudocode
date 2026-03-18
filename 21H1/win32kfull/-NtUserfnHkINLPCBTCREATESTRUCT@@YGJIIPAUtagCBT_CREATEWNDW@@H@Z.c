/*
 * XREFs of ?NtUserfnHkINLPCBTCREATESTRUCT@@YGJIIPAUtagCBT_CREATEWNDW@@H@Z @ 0x15F104
 * Callers:
 *     _NtUserCallNextHookEx@16 @ 0x15FE73 (_NtUserCallNextHookEx@16.c)
 * Callees:
 *     _RtlInitLargeAnsiString@8 @ 0x1D5FC (_RtlInitLargeAnsiString@8.c)
 *     _RtlInitLargeUnicodeString@8 @ 0x1DCA6 (_RtlInitLargeUnicodeString@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _xxxCallNextHookEx@12 @ 0x152C82 (_xxxCallNextHookEx@12.c)
 */

size_t __userpurge NtUserfnHkINLPCBTCREATESTRUCT@<eax>(
        struct tagHOOK *a1@<edx>,
        int a2@<ecx>,
        ULONG a3,
        unsigned int a4,
        struct tagCBT_CREATEWNDW *a5,
        int a6)
{
  ULONG v6; // eax
  void *v7; // edi
  _DWORD *v8; // ebx
  char *v9; // edx
  const char *v10; // edx
  _WORD *v11; // edx
  size_t v12; // edx
  _DWORD v14[19]; // [esp+10h] [ebp-80h] BYREF
  int v15; // [esp+5Ch] [ebp-34h] BYREF
  int v16; // [esp+60h] [ebp-30h]
  bool v17[4]; // [esp+6Ch] [ebp-24h]
  struct tagHOOK *v18; // [esp+70h] [ebp-20h]
  int v19; // [esp+74h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+78h] [ebp-18h]

  v18 = a1;
  *(_DWORD *)v17 = a2;
  v15 = 0;
  v16 = 0;
  memset(v14, 0, 0x48u);
  v19 = 0;
  ms_exc.registration.TryLevel = 0;
  v6 = _MmUserProbeAddress;
  if ( a3 < _MmUserProbeAddress )
    v6 = a3;
  v7 = *(void **)v6;
  v15 = (int)v7;
  v16 = *(_DWORD *)(v6 + 4);
  if ( (unsigned int)v7 >= _MmUserProbeAddress )
  {
    *(_DWORD *)_MmUserProbeAddress = 0;
    v7 = (void *)v15;
  }
  qmemcpy(v7, v7, 0x30u);
  v8 = (_DWORD *)v15;
  v19 = v15;
  qmemcpy(v14, (const void *)v15, 0x30u);
  v15 = (int)v14;
  v9 = (char *)v14[9];
  if ( a4 )
  {
    if ( v14[9] )
    {
      v9 = (char *)v14[9];
      v8 = (_DWORD *)v19;
    }
    RtlInitLargeAnsiString(&v14[12], v9);
    v10 = (const char *)v14[10];
    if ( (v14[10] & 0xFFFF0000) != 0 )
    {
      if ( v14[10] )
      {
        v10 = (const char *)v14[10];
        v8 = (_DWORD *)v19;
      }
      RtlInitLargeAnsiString(&v14[15], v10);
    }
  }
  else
  {
    if ( v14[9] )
    {
      v9 = (char *)v14[9];
      v8 = (_DWORD *)v19;
    }
    RtlInitLargeUnicodeString(&v14[12], v9);
    v11 = (_WORD *)v14[10];
    if ( (v14[10] & 0xFFFF0000) != 0 )
    {
      if ( v14[10] )
      {
        v11 = (_WORD *)v14[10];
        v8 = (_DWORD *)v19;
      }
      RtlInitLargeUnicodeString(&v14[15], v11);
    }
  }
  ms_exc.registration.TryLevel = -2;
  v12 = xxxCallNextHookEx(*(int *)v17, v18, &v15);
  ms_exc.registration.TryLevel = 1;
  *(_DWORD *)(a3 + 4) = v16;
  v8[7] = *(_DWORD *)(v15 + 28);
  v8[6] = *(_DWORD *)(v15 + 24);
  v8[5] = *(_DWORD *)(v15 + 20);
  v8[4] = *(_DWORD *)(v15 + 16);
  return v12;
}
