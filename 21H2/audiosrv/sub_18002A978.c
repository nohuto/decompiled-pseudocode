/*
 * XREFs of sub_18002A978 @ 0x18002A978
 * Callers:
 *     sub_18002A920 @ 0x18002A920 (sub_18002A920.c)
 * Callees:
 *     sub_180001FB0 @ 0x180001FB0 (sub_180001FB0.c)
 *     sub_180002040 @ 0x180002040 (sub_180002040.c)
 *     sub_180023350 @ 0x180023350 (sub_180023350.c)
 *     sub_180023370 @ 0x180023370 (sub_180023370.c)
 *     sub_18002ABF0 @ 0x18002ABF0 (sub_18002ABF0.c)
 *     sub_18002AD80 @ 0x18002AD80 (sub_18002AD80.c)
 *     sub_18002AEF8 @ 0x18002AEF8 (sub_18002AEF8.c)
 *     sub_18002C4D0 @ 0x18002C4D0 (sub_18002C4D0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800CF46C @ 0x1800CF46C (sub_1800CF46C.c)
 *     sub_1800D0B30 @ 0x1800D0B30 (sub_1800D0B30.c)
 *     sub_1800D1184 @ 0x1800D1184 (sub_1800D1184.c)
 */

__int64 __fastcall sub_18002A978(unsigned int a1, __int64 a2)
{
  DWORD v2; // r15d
  __int64 v3; // r13
  unsigned int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *v8; // r12
  __int64 *v9; // rsi
  unsigned int v10; // r13d
  __int64 *v11; // r12
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rbx
  struct _RTL_CRITICAL_SECTION *v18[2]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v19[18]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v21; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v22; // [rsp+E0h] [rbp+77h]
  __int64 v23; // [rsp+E8h] [rbp+7Fh] BYREF

  v21 = a2;
  v2 = *(_DWORD *)(a2 + 4);
  v3 = a2;
  v4 = a1;
  if ( (unsigned int)IsTSSessionIdAudioProtocolSupported() )
  {
    v5 = 0LL;
    v22 = sub_18002ABF0(v2);
    v23 = 0LL;
    v6 = v22;
    EnterCriticalSection(&CriticalSection);
    if ( qword_18019EF58 )
    {
      sub_1800D0B30(qword_18019EF58, v7, &v23);
      v5 = v23;
    }
    LeaveCriticalSection(&CriticalSection);
    if ( v5 )
    {
      v8 = (struct _RTL_CRITICAL_SECTION *)(v5 + 16);
      EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 16));
      v9 = *(__int64 **)(v5 + 56);
      if ( v9 != *(__int64 **)(v5 + 64) )
      {
        v10 = v22;
        v11 = *(__int64 **)(v5 + 64);
        do
        {
          v12 = *v9;
          sub_180002040((__int64)v19);
          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 4u )
          {
            sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 53LL, &unk_18015DFC8, v2);
          }
          if ( *(_DWORD *)(v12 + 304) != v10 )
          {
            sub_180023370((struct _RTL_CRITICAL_SECTION *)(v12 + 16), v18);
            v23 = sub_18002C4D0(v12 + 56);
            while ( v23 )
            {
              v13 = *(_QWORD *)sub_1800CF46C(v12 + 56, &v23);
              if ( v13 && *(_DWORD *)(v13 + 716) == v2 )
              {
                LOBYTE(v14) = 1;
                (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v13 + 16) + 32LL))(v13 + 16, 4LL, v14);
              }
            }
            sub_180023350(v18);
          }
          sub_180001FB0(v19);
          ++v9;
        }
        while ( v9 != v11 );
        v4 = a1;
        v8 = (struct _RTL_CRITICAL_SECTION *)(v5 + 16);
        v3 = v21;
      }
      if ( v8 )
        LeaveCriticalSection(v8);
      sub_18002AD80(v5);
      v6 = v22;
    }
    if ( qword_18019EE40 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)qword_18019EE40 + 32LL))(qword_18019EE40, v2, v6);
    if ( v4 - 1 > 4 )
    {
      if ( v4 <= 6 )
        goto LABEL_35;
      if ( v4 <= 9 )
        return 0LL;
      if ( v4 == 11 )
      {
        v21 = 0LL;
        v15 = sub_18002AEF8(&v21);
        v16 = v21;
        if ( v15 >= 0 )
          sub_1800D1184(v21, *(unsigned int *)(v3 + 4));
        if ( v16 )
          sub_18002AD80(v16);
      }
      else
      {
LABEL_35:
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 47LL, &unk_18016D4B0, v4);
        }
      }
    }
  }
  return 0LL;
}
