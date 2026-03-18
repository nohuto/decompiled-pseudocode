/*
 * XREFs of ?bClone@EPATHOBJ@@QEAAHAEAV1@@Z @ 0x1C00C5EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z @ 0x1C002ACF4 (-newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

__int64 __fastcall EPATHOBJ::bClone(EPATHOBJ *this, struct EPATHOBJ *a2)
{
  _QWORD *v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *i; // rdi
  char *v8; // r12
  unsigned int v9; // esi
  int v10; // ebp
  struct _PATHRECORD *v11; // rbx
  unsigned int v12; // r8d
  __int64 v13; // rax
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF
  struct _PATHRECORD *v16; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = 0LL;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = 0LL;
  v5 = *((_QWORD *)a2 + 1);
  v6 = *((_QWORD *)this + 1);
  v16 = 0LL;
  *(_OWORD *)(v6 + 48) = *(_OWORD *)(v5 + 48);
  *(_QWORD *)(*((_QWORD *)this + 1) + 64LL) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 64LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 80LL);
  for ( i = *(__int64 **)(*((_QWORD *)a2 + 1) + 32LL); ; i = (__int64 *)*i )
  {
    if ( !i )
      return 1LL;
    v15 = 0;
    v8 = (char *)(i + 3);
    v9 = *((_DWORD *)i + 5);
    v10 = *((_DWORD *)i + 4);
    if ( v9 )
      break;
LABEL_10:
    ;
  }
  while ( (unsigned int)EPATHOBJ::newpathrec(this, &v16, &v15, v9) )
  {
    v11 = v16;
    v12 = v15;
    *((_DWORD *)v16 + 4) = v10;
    *((_QWORD *)v11 + 1) = v4;
    *(_QWORD *)v11 = 0LL;
    if ( v9 > v12 )
    {
      if ( (v10 & 0x10) != 0 )
      {
        if ( (v10 & 1) != 0 )
          v12 = 3 * ((v12 - 1) / 3) + 1;
        else
          v12 = 3 * (v12 / 3);
        v15 = v12;
      }
      *((_DWORD *)v11 + 5) = v12;
      *((_DWORD *)v11 + 4) &= 0xFFFFFFF5;
      v10 &= 0xFFFFFFFA;
    }
    else
    {
      *((_DWORD *)v11 + 5) = v9;
    }
    *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v11;
    if ( v4 )
      *v4 = v11;
    else
      *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v11;
    memmove((char *)v11 + 24, v8, 8LL * *((unsigned int *)v11 + 5));
    v4 = v11;
    v13 = 8LL * *((unsigned int *)v11 + 5);
    v8 += v13;
    v9 -= *((_DWORD *)v11 + 5);
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 8LL) = (char *)v11 + v13 + 24;
    if ( !v9 )
      goto LABEL_10;
  }
  return 0LL;
}
