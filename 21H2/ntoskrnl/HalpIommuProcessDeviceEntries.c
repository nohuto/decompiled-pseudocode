/*
 * XREFs of HalpIommuProcessDeviceEntries @ 0x1404E1A14
 * Callers:
 *     HalpIommuProcessIvhdEntry @ 0x1404E1D20 (HalpIommuProcessIvhdEntry.c)
 * Callees:
 *     RtlSetBits @ 0x140363CC0 (RtlSetBits.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 */

__int64 __fastcall HalpIommuProcessDeviceEntries(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r12
  unsigned __int8 *v4; // rsi
  int Memory; // ebx
  char v6; // di
  unsigned __int64 v7; // r12
  ULONG v8; // ebp
  unsigned __int8 *v9; // r14
  char v10; // r15
  unsigned __int8 *v11; // r13
  _BYTE *v12; // rax
  __int64 v13; // r11
  unsigned __int8 *v14; // r10
  unsigned __int64 v15; // r8
  unsigned int v16; // r9d
  __int64 v17; // rdx
  int v18; // ecx
  ULONG v19; // edx
  unsigned __int8 v20; // al
  ULONG v21; // r8d
  char v22; // dl
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdi
  void **v27; // r15
  __int64 *v28; // rcx
  __int64 v29[10]; // [rsp+28h] [rbp-50h] BYREF
  char v33; // [rsp+98h] [rbp+20h]

  v3 = *(unsigned __int16 *)(a2 + 2);
  v4 = (unsigned __int8 *)(a2 + 40);
  Memory = 0;
  v6 = 0;
  v29[0] = 0LL;
  v7 = a2 + v3;
  v8 = 0;
  v33 = 0;
  v9 = 0LL;
  *a3 = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = (_BYTE *)a2;
  v13 = a1;
  if ( a2 + 40 >= v7 )
    return (unsigned int)Memory;
  while ( 1 )
  {
    v14 = v4;
    v15 = v7 - (_QWORD)v4;
    if ( (unsigned __int8 *)v7 == v4 || (unsigned __int8)(*v12 - 16) <= 1u && *v4 > 0x7Fu )
      return (unsigned int)-1073741811;
    v16 = *v4;
    if ( (_BYTE)v16 == 0xF0 )
    {
      if ( v15 < 0x16 )
        return (unsigned int)-1073741811;
      v11 = v4;
      LODWORD(v17) = v4[21] + 22;
    }
    else
    {
      if ( (unsigned __int8)v16 > 0x7Fu )
        return (unsigned int)-1073741811;
      v17 = 1LL << ((*v4 >> 6) + 2);
    }
    if ( (unsigned int)v17 > v15 )
      return (unsigned int)-1073741811;
    v4 += (unsigned int)v17;
    if ( v9 )
    {
      if ( (_BYTE)v16 != 4 )
        return (unsigned int)-1073741811;
      v18 = *(unsigned __int16 *)(v14 + 1);
      v19 = *(unsigned __int16 *)(v9 + 1);
      if ( (unsigned __int16)v18 < (unsigned __int16)v19 )
        return (unsigned int)-1073741811;
      v20 = *v9;
      if ( *v9 != 3 )
      {
        if ( v20 == 67 )
        {
          v8 = *(unsigned __int16 *)(v9 + 5);
          v21 = 1;
          v19 = v8;
LABEL_20:
          RtlSetBits((PRTL_BITMAP)(v13 + 184), v19, v21);
          goto LABEL_21;
        }
        if ( v20 != 71 )
        {
          Memory = -1073741811;
LABEL_21:
          v9 = 0LL;
          goto LABEL_49;
        }
      }
      v21 = v18 - v19 + 1;
      goto LABEL_20;
    }
    v22 = v10;
    v10 = 0;
    if ( v16 > 0x40 )
    {
      if ( v16 == 66 )
      {
        v8 = *(unsigned __int16 *)(v14 + 5);
        v6 = 1;
        v33 = 1;
        goto LABEL_47;
      }
      if ( v16 == 67 )
        goto LABEL_45;
      if ( v16 != 70 )
      {
        if ( v16 != 71 )
        {
          if ( v16 != 240 )
            goto LABEL_37;
          if ( v11[20] != 2 )
          {
            *a3 = 1;
            goto LABEL_49;
          }
          v8 = *(unsigned __int16 *)(v11 + 1);
          RtlSetBits((PRTL_BITMAP)(v13 + 184), v8, 1u);
          Memory = ExtEnvAllocateMemory(v24, 0x20u, v29);
          if ( Memory < 0 )
            return (unsigned int)Memory;
          v26 = v29[0];
          *(_OWORD *)v29[0] = 0LL;
          v27 = (void **)(v26 + 16);
          *(_OWORD *)(v26 + 16) = 0LL;
          *(_DWORD *)(v26 + 24) = v8;
          Memory = ExtEnvAllocateMemory(v25, (unsigned int)v11[21] + 1, (__int64 *)(v26 + 16));
          if ( Memory < 0 )
            return (unsigned int)Memory;
          memset(*v27, 0, v11[21] + 1LL);
          memmove(*v27, v11 + 22, v11[21]);
          v13 = a1;
          v28 = *(__int64 **)(a1 + 232);
          if ( *v28 != a1 + 224 )
            __fastfail(3u);
          v10 = 0;
          *(_QWORD *)v26 = a1 + 224;
          *(_QWORD *)(v26 + 8) = v28;
          *v28 = v26;
          *(_QWORD *)(a1 + 232) = v26;
          v6 = v33;
          goto LABEL_47;
        }
LABEL_45:
        v9 = v14;
        goto LABEL_47;
      }
    }
    else
    {
      if ( v16 == 64 || !(_BYTE)v16 || v16 == 1 )
        goto LABEL_47;
      if ( v16 != 2 )
      {
        if ( v16 != 3 )
        {
          if ( v16 != 4 )
          {
LABEL_37:
            v10 = 1;
            goto LABEL_47;
          }
          if ( !v22 )
            return (unsigned int)-1073741811;
LABEL_47:
          if ( !v6 )
            goto LABEL_49;
          goto LABEL_48;
        }
        goto LABEL_45;
      }
    }
    v8 = *(unsigned __int16 *)(v14 + 1);
LABEL_48:
    RtlSetBits((PRTL_BITMAP)(v13 + 184), v8, 1u);
    v6 = 0;
    v33 = 0;
LABEL_49:
    if ( (unsigned __int64)v4 >= v7 )
      break;
    v12 = (_BYTE *)a2;
    v13 = a1;
  }
  if ( v9 )
    return (unsigned int)-1073741811;
  return (unsigned int)Memory;
}
