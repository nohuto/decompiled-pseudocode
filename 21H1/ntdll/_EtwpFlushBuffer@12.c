/*
 * XREFs of _EtwpFlushBuffer@12 @ 0x4B2EDE46
 * Callers:
 *     _EtwpFlushActiveBuffers@8 @ 0x4B2EDD0E (_EtwpFlushActiveBuffers@8.c)
 *     _EtwpBufferingModeFlush@4 @ 0x4B38140A (_EtwpBufferingModeFlush@4.c)
 * Callees:
 *     _NtWriteFile@36 @ 0x4B2F29E0 (_NtWriteFile@36.c)
 *     __alldiv @ 0x4B2F6300 (__alldiv.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _EtwpWriteBufferCompressed@16 @ 0x4B3831CD (_EtwpWriteBufferCompressed@16.c)
 */

int __fastcall EtwpFlushBuffer(int a1, int a2, __int16 a3)
{
  int v4; // esi
  NTSTATUS v5; // edx
  int v6; // ecx
  unsigned int v7; // ecx
  ULONG v8; // edx
  bool v9; // zf
  int v10; // ecx
  ULONG v11; // edx
  int v12; // ebx
  ULONG v13; // ecx
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  int v19; // ebx
  __int64 v20; // [esp-8h] [ebp-38h]
  size_t v21; // [esp-4h] [ebp-34h]
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+Ch] [ebp-24h] BYREF
  int v23; // [esp+14h] [ebp-1Ch]
  unsigned __int64 v24; // [esp+18h] [ebp-18h]
  int v25; // [esp+20h] [ebp-10h] BYREF
  int v26; // [esp+24h] [ebp-Ch] BYREF
  ULONG Length; // [esp+28h] [ebp-8h]
  int v28; // [esp+2Ch] [ebp-4h]

  v4 = a1;
  v5 = 0;
  v23 = a1;
  v25 = 0;
  v28 = 0;
  v6 = *(_DWORD *)(a2 + 4);
  v26 = 0;
  if ( !v6 )
  {
    v6 = *(_DWORD *)(a2 + 8);
    v28 = v26;
  }
  *(_DWORD *)(a2 + 48) = v6;
  if ( v6 == 72 && a3 != 1 )
    return -2147483614;
  if ( *(_DWORD *)(v4 + 104) )
  {
    v7 = *(_DWORD *)(v4 + 212);
    v8 = *(_DWORD *)(v4 + 140);
    Length = v8;
    v9 = *(_DWORD *)(v4 + 208) == 0;
    LODWORD(v24) = (v7 >> 2) & 2;
    if ( !v9 )
    {
      v24 = (v7 & 0x4000000) != 0
          ? *(_QWORD *)(v4 + 248)
          : v8 * (unsigned __int64)(unsigned int)(v24 + *(_DWORD *)(v4 + 224));
      if ( v24 >= *(unsigned int *)(v4 + 208) * (unsigned __int64)((v7 & 0x2000) != 0 ? 1024 : 0x100000) )
      {
        v15 = (v7 & 0xB) - 1;
        if ( !v15 )
        {
          v5 = -1073741432;
LABEL_34:
          v19 = v28;
          *(_DWORD *)(v4 + 276) += v28;
          if ( (*(_DWORD *)(v4 + 212) & 0x10000) != 0 )
            *(_DWORD *)(12 * *(unsigned __int16 *)(a2 + 42) + *(_DWORD *)(v4 + 356) + 8) += v19;
          return v5;
        }
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 6 )
            *(_DWORD *)(v4 + 220) |= 1u;
        }
        else
        {
          v17 = *(_DWORD *)(v4 + 244);
          v18 = *(_DWORD *)(v4 + 240);
          v20 = Length;
          *(_DWORD *)(v4 + 248) = v18;
          *(_DWORD *)(v4 + 252) = v17;
          *(_DWORD *)(v4 + 224) = __SPAIR64__(v17, v18) / v20;
        }
      }
    }
    *(_WORD *)(a2 + 52) = a3 | 0x20;
    while ( 1 )
    {
      v10 = MEMORY[0x7FFE0018];
      LODWORD(v24) = MEMORY[0x7FFE0014];
      if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
        break;
      _mm_pause();
    }
    v4 = v23;
    v11 = Length;
    *(_DWORD *)(a2 + 16) = v24;
    *(_DWORD *)(a2 + 20) = v10;
    v12 = 1;
    if ( (*(_DWORD *)(v4 + 212) & 0x4000000) != 0 )
    {
      v5 = EtwpWriteBufferCompressed(v4, a2, &v25, &v26);
      v28 = v26;
    }
    else
    {
      v13 = *(_DWORD *)(a2 + 48);
      if ( v13 < v11 )
      {
        LODWORD(v21) = v11 - v13;
        memset((void *)(v13 + a2), 255, v21);
        v11 = Length;
      }
      v5 = NtWriteFile(*(HANDLE *)(v4 + 104), 0, 0, 0, &IoStatusBlock, (PVOID)a2, v11, (PLARGE_INTEGER)(v4 + 248), 0);
      if ( v5 >= 0 )
      {
        *(_QWORD *)(v4 + 248) += Length;
        v28 = v26;
LABEL_16:
        if ( v5 >= 0 )
        {
          *(_DWORD *)(v4 + 280) += v12;
          *(_DWORD *)(v4 + 224) += v12;
          if ( (*(_DWORD *)(v4 + 212) & 0x10000) != 0 )
            *(_DWORD *)(12 * *(unsigned __int16 *)(a2 + 42) + *(_DWORD *)(v4 + 356)) += v12;
          return v5;
        }
        if ( v5 == -2147483614 )
          return v5;
        goto LABEL_34;
      }
      v28 = 1;
    }
    v12 = v25;
    goto LABEL_16;
  }
  return v5;
}
