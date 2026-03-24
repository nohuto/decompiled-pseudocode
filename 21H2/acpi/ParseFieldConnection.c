/*
 * XREFs of ParseFieldConnection @ 0x1C006BA34
 * Callers:
 *     ParseField @ 0x1C0021D30 (ParseField.c)
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     ParseName @ 0x1C00214C4 (ParseName.c)
 *     ParseIntObj @ 0x1C0022724 (ParseIntObj.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     ParsePackageLen @ 0x1C006BD9C (ParsePackageLen.c)
 */

__int64 __fastcall ParseFieldConnection(__int64 a1, __int64 *a2)
{
  unsigned __int64 *v2; // rsi
  _BYTE *v3; // rax
  unsigned __int64 v6; // rdi
  int v7; // r12d
  _WORD *v8; // r13
  bool v9; // zf
  int v10; // eax
  _WORD *v11; // rbp
  const void *v12; // rbx
  const void *v13; // rdx
  int v14; // ecx
  unsigned __int64 v15; // r8
  int v16; // eax
  char *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  __int64 v21; // rcx
  const void *v22; // rdx
  int v23; // ecx
  __int64 v24; // rax
  void *v25; // rcx
  unsigned int v26; // eax
  unsigned __int64 v28; // [rsp+30h] [rbp-178h] BYREF
  __int128 v29; // [rsp+38h] [rbp-170h] BYREF
  __int128 v30; // [rsp+48h] [rbp-160h]
  __int64 v31; // [rsp+58h] [rbp-150h]
  char Src[256]; // [rsp+60h] [rbp-148h] BYREF

  v2 = (unsigned __int64 *)(a1 + 120);
  v28 = 0LL;
  v31 = 0LL;
  v3 = *(_BYTE **)(a1 + 120);
  v6 = 0LL;
  v29 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = *v3 == 17;
  v30 = 0LL;
  if ( v9 )
  {
    *v2 = (unsigned __int64)(v3 + 1);
    ParsePackageLen(a1 + 120, &v28);
    v10 = ParseIntObj(a1, (_WORD **)v2, (__int64)&v29, 0);
    v6 = (unsigned int)v30;
    v11 = (_WORD *)v28;
    v12 = (const void *)v10;
    if ( v10 )
    {
      LogError(v10);
      AcpiDiagTraceAmlError(a1, (int)v12);
      v13 = v12;
      v14 = 40;
      v15 = 0LL;
    }
    else
    {
      if ( *v2 <= v28 && (unsigned int)v30 <= (int)v28 - *(_DWORD *)v2 + 1 )
        goto LABEL_8;
      LODWORD(v12) = -1072431089;
      LogError(-1072431089);
      AcpiDiagTraceAmlError(a1, -1072431089);
      v13 = (const void *)v6;
      v15 = (unsigned int)((_DWORD)v11 - *(_DWORD *)v2);
      v14 = 42;
    }
    PrintDebugMessage(v14, v13, (const void *)v15, 0LL, 0LL);
LABEL_8:
    v8 = (_WORD *)*v2;
    v7 = 2;
    *v2 = (unsigned __int64)v11;
    goto LABEL_21;
  }
  v16 = ParseName(a1, (char **)(a1 + 120), Src);
  v12 = (const void *)v16;
  if ( v16 )
  {
    LogError(v16);
    AcpiDiagTraceAmlError(a1, (int)v12);
    PrintDebugMessage(41, v12, 0LL, 0LL, 0LL);
  }
  else
  {
    v17 = Src;
    v18 = 256LL;
    do
    {
      if ( !*v17 )
        break;
      ++v17;
      --v18;
    }
    while ( v18 );
    LODWORD(v12) = v18 == 0 ? 0xC000000D : 0;
    if ( v18 )
      v19 = 256 - v18;
    else
      v19 = 0LL;
    v20 = v19 & -(__int64)(v18 != 0);
    if ( v20 > 0x100 )
      v6 = 256LL;
    else
      v6 = v20 + 1;
    v7 = 1;
  }
LABEL_21:
  if ( (_DWORD)v12 )
    return (unsigned int)v12;
  v21 = *a2;
  if ( *a2 )
  {
    if ( *(unsigned int *)(v21 + 8) >= v6 )
      goto LABEL_31;
    HeapFree((_QWORD *)v21);
    *a2 = 0LL;
  }
  if ( v6 > 0xFFFFFFEF )
  {
    LODWORD(v12) = -1072431089;
    LogError(-1072431089);
    AcpiDiagTraceAmlError(a1, -1072431089);
    v22 = (const void *)v6;
    v23 = 39;
LABEL_29:
    PrintDebugMessage(v23, v22, 0LL, 0LL, 0LL);
    goto LABEL_31;
  }
  v24 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1314407240, (int)v6 + 16);
  *a2 = v24;
  if ( !v24 )
  {
    LODWORD(v12) = -1073741670;
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    v22 = 0LL;
    v23 = 126;
    goto LABEL_29;
  }
  *(_DWORD *)(v24 + 8) = v6;
LABEL_31:
  if ( *a2 )
  {
    *(_DWORD *)(*a2 + 12) = v6;
    *(_DWORD *)*a2 = v7;
    v25 = (void *)(*a2 + 16);
    v26 = *(_DWORD *)(*a2 + 12);
    if ( v7 == 2 )
    {
      memmove(v25, v8, v26);
    }
    else
    {
      memmove(v25, Src, v26 - 1);
      *(_BYTE *)((unsigned int)(*(_DWORD *)(*a2 + 12) - 1) + *a2 + 16) = 0;
    }
  }
  return (unsigned int)v12;
}
