/*
 * XREFs of sub_1800349D0 @ 0x1800349D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 */

__int64 __fastcall sub_1800349D0(__int64 a1, __int64 a2, _OWORD *a3, __int128 *a4)
{
  int v4; // r14d
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  void *v14; // r15
  unsigned __int64 v15; // rdx
  __int128 v16; // xmm0
  __int64 v17; // r9
  _WORD *v18; // rax
  __int16 v19; // cx
  HANDLE ProcessHeap; // rax

  v4 = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 22LL, &unk_18015DF00, 0LL);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v8 = *(_QWORD *)(a1 + 72);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 728);
    v10 = 2 * *(_DWORD *)(v9 - 16) + 2;
    v11 = 2 * *(_DWORD *)(v9 - 16) + 74;
    v12 = sub_18006A1B0(v11, &unk_18019F848);
    v14 = (void *)v12;
    if ( v12 )
    {
      *(_DWORD *)v12 = v11;
      if ( !a4 )
        a4 = &xmmword_18015B730;
      v15 = (unsigned __int64)v10 >> 1;
      v16 = *a4;
      *(_DWORD *)(v12 + 24) = v10;
      *(_DWORD *)(v12 + 4) = 4;
      *(_OWORD *)(v12 + 28) = v16;
      *(_OWORD *)(v12 + 48) = *a3;
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 728LL);
      v18 = (_WORD *)(v12 + 72);
      if ( v15 )
      {
        v13 = 2147483646 - v15;
        v17 -= (__int64)v18;
        while ( v13 + v15 )
        {
          v19 = *(_WORD *)((char *)v18 + v17);
          if ( !v19 )
            break;
          *v18++ = v19;
          if ( !--v15 )
          {
            --v18;
            break;
          }
        }
        *v18 = 0;
      }
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 23LL, &unk_18015DF00, v14, *(_DWORD *)(a1 + 80));
      }
      v4 = MMDevAPI_12(v14, *(unsigned int *)(a1 + 80), v13, v17);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v14);
      if ( v4 < 0 )
        sub_18005E8F8("CServerAudioSessionControl::OnGroupingParamChanged", 683LL, (unsigned int)v4);
    }
  }
  if ( a1 != -32 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  return (unsigned int)v4;
}
