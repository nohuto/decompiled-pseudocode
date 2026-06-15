/*
 * XREFs of sub_1800209A0 @ 0x1800209A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180012518 @ 0x180012518 (sub_180012518.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     sub_18001A860 @ 0x18001A860 (sub_18001A860.c)
 *     sub_18001DBC4 @ 0x18001DBC4 (sub_18001DBC4.c)
 *     sub_18001F228 @ 0x18001F228 (sub_18001F228.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800209A0(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  __int64 v5; // r8
  const char *v6; // rax
  int v7; // eax
  unsigned int v8; // esi
  int v9; // edx
  volatile signed __int32 *v10; // rdi
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-38h] BYREF
  char v15; // [rsp+48h] [rbp-30h]
  volatile signed __int32 *v16; // [rsp+80h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+88h] [rbp+10h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v17 = v4;
  v16 = 0LL;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    v6 = "PENDING_TERMINATION";
    if ( !*(_DWORD *)(a2 + 12) )
      v6 = "LAUNCHED";
    sub_18001A860(*((_QWORD *)off_18004F000 + 2), (__int64)"LAUNCHED", v5, *(const wchar_t **)a2, v6);
  }
  v7 = sub_18001DBC4(a1, *(const WCHAR **)a2, *(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 8), &v16, 0, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x3Eu, &stru_1800445C8, v7);
    }
    sub_180005724("CApplicationManager::OnApplicationStateChanged", 3363, v8);
  }
  else
  {
    v9 = *(_DWORD *)(a2 + 12);
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        v10 = v16;
        if ( *((_DWORD *)v16 + 52) )
          sub_18001F228(a1, *(const WCHAR **)a2, *((_QWORD *)v16 + 80), *(_DWORD *)(a2 + 8));
        lpCriticalSection = (LPCRITICAL_SECTION)(v10 + 8);
        v15 = 0;
        sub_18001A330((__int64)&lpCriticalSection);
        v11 = (_QWORD *)*((_QWORD *)v10 + 9);
        while ( v11 )
        {
          v12 = v11[2];
          v11 = (_QWORD *)*v11;
          if ( !*(_DWORD *)(v12 + 448) )
            *(_DWORD *)(v12 + 448) = 1;
        }
        if ( v15 )
          LeaveCriticalSection(lpCriticalSection);
      }
    }
    else
    {
      sub_180012518((__int64)v16);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v8;
}
