/*
 * XREFs of sub_1800CB980 @ 0x1800CB980
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180061BA0 @ 0x180061BA0 (sub_180061BA0.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 *     sub_1800C2408 @ 0x1800C2408 (sub_1800C2408.c)
 *     sub_1800CB200 @ 0x1800CB200 (sub_1800CB200.c)
 */

__int64 __fastcall sub_1800CB980(__int64 a1, __int64 a2, unsigned int a3, float *a4, int a5, __int128 *a6)
{
  int v9; // edi
  _UNKNOWN **v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  __int128 *v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // r15
  char *v17; // r15
  __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // [rsp+20h] [rbp-38h]
  unsigned int v23; // [rsp+60h] [rbp+8h]

  v9 = 0;
  v10 = (_UNKNOWN **)off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348 )
  {
    if ( (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0 && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x24u, (__int64)&unk_18015DF00, 0LL);
      v10 = (_UNKNOWN **)off_18019C348;
    }
    if ( v10 != &off_18019C348 && (*((_BYTE *)v10 + 28) & 0x40) != 0 && *((_BYTE *)v10 + 25) >= 4u )
      sub_1800CB200((__int64)v10[2], 0x25u, (__int64)&unk_18015DF00, 0LL);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v11 = *(_QWORD *)(a1 + 72);
  if ( v11 )
  {
    v23 = 2 * *(_DWORD *)(*(_QWORD *)(v11 + 728) - 16LL) + 2;
    v12 = sub_18006A1B0((v23 + 4 * a3 + 75) & 0xFFFFFFFC);
    v13 = v12;
    if ( v12 )
    {
      *v12 = (v23 + 4 * a3 + 75) & 0xFFFFFFFC;
      v14 = &xmmword_18015B730;
      if ( a6 )
        v14 = a6;
      v15 = *v14;
      v13[13] = a5;
      *(_OWORD *)(v13 + 7) = v15;
      v13[1] = 2;
      v13[6] = v23;
      v16 = (v23 + 75) & 0xFFFFFFFC;
      v13[14] = a3;
      v13[12] = v16;
      v17 = (char *)v13 + v16;
      if ( a3 )
      {
        v18 = v17 - (char *)a4;
        do
        {
          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 4u )
          {
            LODWORD(v22) = v9;
            sub_1800C2408(*((_QWORD *)off_18019C348 + 2), 0x26u, (__int64)&unk_18015DF00, 0LL, v22, *a4);
          }
          ++v9;
          *(float *)((char *)a4 + v18) = *a4;
          ++a4;
        }
        while ( v9 < a3 );
      }
      sub_180061BA0((_WORD *)v13 + 36, v23, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 728LL));
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        LODWORD(v22) = *(_DWORD *)(a1 + 80);
        sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 0x27u, (__int64)&unk_18015DF00, v13, v22);
      }
      v9 = MMDevAPI_12(v13, *(unsigned int *)(a1 + 80), v19, v20);
      sub_180033A70(v13);
      if ( v9 < 0 )
        sub_18005E8F8((__int64)"CServerAudioSessionControl::OnChannelVolumeChanged", 1373, v9);
    }
  }
  if ( a1 != -32 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  return (unsigned int)v9;
}
