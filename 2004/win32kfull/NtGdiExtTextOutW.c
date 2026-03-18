/*
 * XREFs of NtGdiExtTextOutW @ 0x1C0018530
 * Callers:
 *     <none>
 * Callees:
 *     GreExtTextOutRect @ 0x1C0017C44 (GreExtTextOutRect.c)
 *     GreExtTextOutWInternal @ 0x1C00188EC (GreExtTextOutWInternal.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtGdiExtTextOutW(
        HDC a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        ULONG64 a5,
        __int64 a6,
        unsigned int a7,
        void *Src,
        int a9)
{
  struct tagRECT *v9; // rbx
  __int64 v10; // rax
  const void *v11; // rdx
  unsigned int v12; // r15d
  unsigned int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 *v16; // rdi
  ULONG64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 *v19; // r15
  char *v20; // rdi
  size_t v21; // r8
  unsigned int v22; // esi
  __int64 v25; // [rsp+98h] [rbp-150h]
  unsigned int v26; // [rsp+B8h] [rbp-130h]
  struct tagRECT v27; // [rsp+C8h] [rbp-120h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-108h] BYREF

  v9 = (struct tagRECT *)a5;
  v10 = a6;
  v11 = Src;
  v27 = 0LL;
  if ( a7 > 0xFFFF )
    return 0LL;
  if ( a5 )
  {
    if ( (a4 & 6) != 0 )
    {
      if ( a5 >= MmUserProbeAddress )
        v9 = (struct tagRECT *)MmUserProbeAddress;
      v27 = *v9;
      v9 = &v27;
      v10 = a6;
    }
    else
    {
      v9 = 0LL;
    }
  }
  if ( !a7 )
  {
    if ( v9 && (a4 & 2) != 0 )
      return (unsigned int)GreExtTextOutRect(a1, v9);
    else
      return 1;
  }
  if ( (a4 & 6) != 0 && !v9 || !v10 )
    return 0;
  v12 = 0;
  v13 = (30 * a7 + 7) & 0xFFFFFFF8;
  if ( Src )
  {
    v12 = 4 * a7;
    if ( (a4 & 0x2000) != 0 )
      v12 = 8 * a7;
  }
  v26 = v12 + 7;
  v14 = v13 + 2 * a7 + ((v12 + 7) & 0xFFFFFFF8);
  if ( (unsigned int)v14 <= 0xC0 )
  {
    v15 = 0LL;
    v16 = &v28;
LABEL_16:
    if ( v11 )
    {
      if ( v12 )
      {
        v17 = (ULONG64)v11 + v12;
        if ( v17 > MmUserProbeAddress || v17 < (unsigned __int64)v11 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v16, v11, v12);
      v18 = a6;
      v19 = v16;
      v16 = (__int64 *)((char *)v16 + (v26 & 0xFFFFFFF8));
    }
    else
    {
      v19 = (__int64 *)Src;
      v18 = a6;
    }
    v25 = (__int64)v16;
    v20 = (char *)v16 + v13;
    v21 = 2LL * (int)a7;
    if ( v21 )
    {
      if ( (v18 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v21 + v18 > MmUserProbeAddress || v21 + v18 < v18 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v20, (const void *)v18, v21);
    v22 = GreExtTextOutWInternal(a1, (__int64)v9, (__int64)v20, a7, (__int64)v19, v25, a9);
    if ( v15 )
      FreeTmpBuffer(v15);
    return v22;
  }
  v15 = AllocFreeTmpBuffer(v14);
  v16 = (__int64 *)v15;
  if ( v15 )
  {
    v11 = Src;
    goto LABEL_16;
  }
  return 0LL;
}
