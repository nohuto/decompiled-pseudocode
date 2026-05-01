/*
 * XREFs of sub_18003EBB8 @ 0x18003EBB8
 * Callers:
 *     sub_180041098 @ 0x180041098 (sub_180041098.c)
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800447FC (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall sub_18003EBB8(DWORD dwProcessId, _WORD *a2, unsigned int *a3)
{
  _WORD *v4; // rdi
  NTSTATUS v5; // r14d
  unsigned int v6; // esi
  unsigned __int16 *v7; // rbp
  unsigned __int64 v9; // rdx
  HANDLE v10; // r15
  signed int LastError; // eax
  int v12; // ebx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int16 v15; // r9
  int v16; // r8d
  _WORD *v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // r8
  __int16 v21; // ax
  ULONG ProcessInformationLength; // [rsp+70h] [rbp+18h] BYREF

  ProcessInformationLength = 512;
  v4 = a2;
  v5 = -1073741820;
  v6 = 0;
  v7 = 0LL;
  if ( !a3 )
    return 2147500035LL;
  *a2 = 0;
  v10 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( v10 )
    goto LABEL_16;
  LastError = GetLastError();
  v12 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v12 = LastError;
  if ( v12 >= 0 )
  {
LABEL_16:
    v13 = 0;
    do
    {
      if ( v13 >= 2 || ProcessInformationLength > 0x10000 )
        break;
      j_j__o_free(v7, v9);
      v7 = (unsigned __int16 *)operator new(
                                 ProcessInformationLength + 2LL,
                                 (const struct std::nothrow_t *)&unk_18005AF88);
      v5 = v7
         ? NtQueryInformationProcess(
             v10,
             ProcessImageFileMapping|ProcessUserModeIOPL,
             v7,
             ProcessInformationLength,
             &ProcessInformationLength)
         : -1073741801;
      ++v13;
    }
    while ( v5 == -1073741820 );
    v12 = 0;
    if ( v5 < 0 )
      v12 = v5 | 0x10000000;
    if ( v12 >= 0 )
    {
      v14 = *v7 >> 1;
      v15 = 32;
      v7[v14 + 8] = 0;
      v16 = 1;
      if ( v7[8] == 34 )
        v15 = 34;
      if ( (unsigned int)v14 <= 1 )
        goto LABEL_44;
      v17 = v7 + 9;
      while ( 1 )
      {
        v9 = (unsigned int)(v16 + 1);
        if ( *v17 == v15 )
          break;
        ++v17;
        ++v16;
        if ( (unsigned int)v9 >= (unsigned int)v14 )
          goto LABEL_44;
      }
      v6 = v14 - v16;
      v9 = (unsigned __int64)&v7[v9 + 8];
      if ( !v9 || !v6 )
        goto LABEL_44;
      do
      {
        if ( *(_WORD *)v9 != 32 )
          break;
        v9 += 2LL;
        --v6;
      }
      while ( v6 );
      v18 = *a3;
      v12 = 0;
      v19 = v18 - 1;
      if ( v6 < (int)v18 - 1 )
        v19 = v6;
      v6 = v19;
      if ( (unsigned __int64)(v18 - 1) > 0x7FFFFFFE )
        v12 = -2147024809;
      if ( v12 < 0 )
      {
        if ( !*a3 )
        {
LABEL_44:
          *a3 = v6;
          goto LABEL_45;
        }
      }
      else if ( v19 <= 0x7FFFFFFEuLL )
      {
        v12 = 0;
        if ( !*a3 )
          goto LABEL_41;
        v20 = v19 - v18;
        v9 -= (unsigned __int64)v4;
        do
        {
          if ( !(v20 + v18) )
            break;
          v21 = *(_WORD *)((char *)v4 + v9);
          if ( !v21 )
            break;
          *v4++ = v21;
          --v18;
        }
        while ( v18 );
        if ( !v18 )
        {
LABEL_41:
          --v4;
          v12 = -2147024774;
        }
      }
      else
      {
        v12 = -2147024809;
      }
      *v4 = 0;
      goto LABEL_44;
    }
  }
LABEL_45:
  j_j__o_free(v7, v9);
  if ( v10 )
    CloseHandle(v10);
  return (unsigned int)v12;
}
