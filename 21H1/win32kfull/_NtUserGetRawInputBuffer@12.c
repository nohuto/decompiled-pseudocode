/*
 * XREFs of _NtUserGetRawInputBuffer@12 @ 0x16426F
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?ClearWakeBit@@YGXPAUtagTHREADINFO@@IH@Z @ 0xEFB5A (-ClearWakeBit@@YGXPAUtagTHREADINFO@@IH@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _FreeHidData@4 @ 0x144291 (_FreeHidData@4.c)
 */

int __stdcall NtUserGetRawInputBuffer(char *Address, ULONG a2, int a3)
{
  int v3; // edi
  unsigned int *v4; // ecx
  int v5; // esi
  _DWORD *i; // ebx
  _DWORD *v7; // eax
  int v8; // eax
  SIZE_T v9; // ecx
  char *v10; // esi
  int v11; // ecx
  int v12; // esi
  unsigned int v13; // edx
  SIZE_T v14; // ecx
  __int32 v15; // ecx
  _DWORD *v16; // eax
  unsigned int v18; // [esp+0h] [ebp-7Ch]
  int v19; // [esp+4h] [ebp-78h]
  int v20[3]; // [esp+10h] [ebp-6Ch] BYREF
  _BYTE v21[8]; // [esp+1Ch] [ebp-60h] BYREF
  _DWORD *v22; // [esp+38h] [ebp-44h]
  unsigned int v23; // [esp+3Ch] [ebp-40h]
  _DWORD *v24; // [esp+40h] [ebp-3Ch]
  int v25; // [esp+48h] [ebp-34h]
  int v26; // [esp+4Ch] [ebp-30h]
  int v27; // [esp+50h] [ebp-2Ch]
  unsigned int v28; // [esp+54h] [ebp-28h]
  int v29; // [esp+58h] [ebp-24h]
  unsigned int v30; // [esp+5Ch] [ebp-20h]
  SIZE_T v31; // [esp+60h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+64h] [ebp-18h]

  v28 = 0;
  v31 = 0;
  v29 = 0;
  v3 = -1;
  v26 = -1;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v21);
  if ( a3 != 16 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_39;
  }
  ms_exc.registration.TryLevel = 0;
  v4 = (unsigned int *)a2;
  if ( a2 >= _MmUserProbeAddress )
    v4 = (unsigned int *)_MmUserProbeAddress;
  v30 = *v4;
  v23 = v30;
  ms_exc.registration.TryLevel = -2;
  v5 = *(_DWORD *)(_gptiCurrent + 236);
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v20, v5);
  v24 = (_DWORD *)(v5 + 12);
  for ( i = *(_DWORD **)(v5 + 12); i; i = v7 )
  {
    v7 = (_DWORD *)*i;
    v22 = (_DWORD *)*i;
    if ( i[3] == 255 )
    {
      v8 = HMValidateHandle(i[5], 18);
      v27 = v8;
      if ( v8 )
      {
        v9 = (*(_DWORD *)(v8 + 20) + 3) & 0xFFFFFFFC;
        v31 = v9;
        v25 = v9 + v28;
        if ( v9 + v28 <= v28 )
          goto LABEL_39;
        v10 = Address;
        if ( !Address || v9 + v28 > v30 )
          goto LABEL_22;
        ms_exc.registration.TryLevel = 1;
        ProbeForWrite(Address, v9, 4u);
        memcpy(Address, (const void *)(v27 + 16), *(_DWORD *)(v27 + 20));
        ++v29;
        Address += v31;
        v28 = v25;
        ms_exc.registration.TryLevel = -2;
        FreeHidData(v27);
      }
      *(_DWORD *)(_gptiCurrent + 304) = i[6];
      DelQEntry(v24, i, 1);
      EtwTraceInputProcessDelay(_gptiCurrent);
      v25 = MEMORY[0xFFDF0004];
      if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
      {
        v12 = MEMORY[0xFFDF0324];
        v13 = MEMORY[0xFFDF0320];
        while ( v12 != MEMORY[0xFFDF0328] )
        {
          _mm_pause();
          v12 = MEMORY[0xFFDF0324];
          v13 = MEMORY[0xFFDF0320];
        }
        v11 = v25 * (v12 << 8) + (((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)v13) >> 24);
      }
      else
      {
        v11 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
      }
      *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 304) = v11;
      v30 = v23;
      v7 = v22;
    }
  }
  v10 = Address;
LABEL_22:
  if ( !i && v10 )
    ClearWakeBit(1024, _gptiCurrent, 0, v18, v19);
  v14 = v31;
  if ( v30 <= v31 )
  {
    if ( v10 )
    {
      UserSetLastError((struct _NT_TIB *)0x7A);
      v14 = v31;
    }
  }
  else if ( v10 )
  {
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
    {
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
        _mm_pause();
      v15 = MEMORY[0xFFDF0004] * (MEMORY[0xFFDF0324] << 8)
          + (((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24);
    }
    else
    {
      v15 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
    }
    _InterlockedExchange((volatile __int32 *)(*(_DWORD *)(_gptiCurrent + 244) + 12), v15);
    v3 = v29;
    goto LABEL_39;
  }
  ms_exc.registration.TryLevel = 2;
  v3 = -(v10 != 0);
  v16 = (_DWORD *)_MmUserProbeAddress;
  if ( a2 < _MmUserProbeAddress )
    v16 = (_DWORD *)a2;
  *v16 = v14;
  ms_exc.registration.TryLevel = -2;
LABEL_39:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v21);
  UserSessionSwitchLeaveCrit();
  return v3;
}
