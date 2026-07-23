/*
 * XREFs of IidGetDeviceIdBufferSize @ 0x140974684
 * Callers:
 *     HalpIommuCloneDeviceId @ 0x1403F00C8 (HalpIommuCloneDeviceId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IidGetDeviceIdBufferSize(int *a1, __int64 *a2)
{
  int v2; // r8d
  int v3; // r8d
  int v4; // r8d
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx

  *a2 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v2 = *a1;
  if ( (unsigned int)(*a1 - 1) > 5 )
    return 3221225485LL;
  *a2 = 24LL;
  v3 = v2 - 1;
  if ( !v3 )
  {
    if ( *((_QWORD *)a1 + 2) )
      *a2 = 2LL * *((unsigned __int16 *)a1 + 7) + 24;
    return 0LL;
  }
  v4 = v3 - 1;
  if ( v4 )
  {
    if ( v4 != 4 )
    {
      *a2 = 0LL;
      return 3221225659LL;
    }
    return 0LL;
  }
  v6 = *((_QWORD *)a1 + 1);
  if ( v6 )
  {
    result = 0LL;
    v7 = -1LL;
    do
      ++v7;
    while ( *(_BYTE *)(v6 + v7) );
    v8 = v7 + 25;
  }
  else
  {
    result = 3221225485LL;
    v8 = 0LL;
  }
  *a2 = v8;
  return result;
}
