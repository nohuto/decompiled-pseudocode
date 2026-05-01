/*
 * XREFs of sub_180032C58 @ 0x180032C58
 * Callers:
 *     sub_180032C18 @ 0x180032C18 (sub_180032C18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180032C58(unsigned __int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  BOOL inited; // eax
  int v8; // r9d
  __int64 result; // rax

  v6 = 61440;
  inited = InitOnceExecuteOnce(&InitOnce, InitFn, &unk_1800B3D40, 0LL);
  v8 = 0;
  if ( inited )
    v6 = dword_1800B3D44;
  LOBYTE(v8) = (unsigned int)(1000 * (a1 >> 10) / v6) > a2;
  result = 0LL;
  *a3 = v8;
  return result;
}
