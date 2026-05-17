/*
 * XREFs of _RtlCreateUserProcess@40 @ 0x4B33FC00
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCreateUserProcessEx@20 @ 0x4B33FC60 (_RtlCreateUserProcessEx@20.c)
 */

int __stdcall RtlCreateUserProcess(int a1, int a2, int a3, int a4, int a5, int a6, char a7, int a8, int a9, void *a10)
{
  int v11; // [esp+0h] [ebp-1Ch] BYREF
  int v12; // [esp+4h] [ebp-18h]
  int v13; // [esp+8h] [ebp-14h]
  int v14; // [esp+Ch] [ebp-10h]
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+18h] [ebp-4h]

  v17 = 0;
  LOWORD(v11) = 1;
  HIWORD(v11) = HIWORD(a2);
  v12 = a4;
  v13 = a5;
  v14 = a6;
  v15 = a8;
  v16 = a9;
  return RtlCreateUserProcessEx(a1, a3, a7, (int)&v11, a10);
}
