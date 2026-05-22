/*
 * XREFs of ?IsSameByInputDest@InputDestTarget@@UEBA_NAEBUtagINPUTDEST@@@Z @ 0x18013AA90
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1800B72C0 (--8@YA_NAEBU_LUID@@0@Z.c)
 */

char __fastcall InputDestTarget::IsSameByInputDest(InputDestTarget *this, const struct tagINPUTDEST *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 1);
  v6 = 0LL;
  v7 = v2;
  if ( operator==((_DWORD *)this + 16, &v6) && operator==(&v7, &v6) )
    return operator==(v3 + 40, v4 + 24);
  else
    return operator==((_DWORD *)(v4 + 64), (_DWORD *)(v3 + 8));
}
