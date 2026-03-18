/*
 * XREFs of RecalculateQueueInfo @ 0x1C0094C60
 * Callers:
 *     zzzDestroyQueue @ 0x1C0051DF0 (zzzDestroyQueue.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *RecalculateQueueInfo()
{
  struct tagTHREADINFO *result; // rax
  _QWORD **v1; // rdx
  _QWORD *v2; // rcx
  _QWORD *i; // rcx
  __int64 v4; // r8
  unsigned int v5; // r9d
  int v6; // r10d

  result = gptiCurrent;
  v1 = (_QWORD **)(*((_QWORD *)gptiCurrent + 57) + 168LL);
  v2 = *v1;
  if ( *v1 != v1 )
  {
    do
    {
      *(_DWORD *)(*(v2 - 39) + 428LL) = 0;
      *(_DWORD *)(*(v2 - 39) + 432LL) = 0;
      result = (struct tagTHREADINFO *)*(v2 - 39);
      *((_DWORD *)result + 97) &= ~0x2000000u;
      v2 = (_QWORD *)*v2;
    }
    while ( v2 != v1 );
    for ( i = *v1; i != v1; i = (_QWORD *)*i )
    {
      result = (struct tagTHREADINFO *)*((unsigned int *)i - 64);
      if ( ((unsigned __int8)result & 1) == 0 )
      {
        v4 = *(i - 40);
        v5 = 0x2000;
        if ( *(PVOID *)v4 != gpepCSRSS )
          v5 = *(_DWORD *)(v4 + 880);
        result = (struct tagTHREADINFO *)*(i - 39);
        v6 = *(_DWORD *)(v4 + 884);
        if ( *((_DWORD *)result + 107) >= v5 )
        {
          if ( *((_DWORD *)result + 108) != v6 )
            *((_DWORD *)result + 108) = 0;
        }
        else
        {
          *((_DWORD *)result + 107) = v5;
          result = (struct tagTHREADINFO *)*(i - 39);
          if ( *((_DWORD *)result + 108) )
            v6 = 0;
          *((_DWORD *)result + 108) = v6;
        }
        if ( (i[61] & 0x40000) != 0 )
        {
          result = (struct tagTHREADINFO *)*(i - 39);
          *((_DWORD *)result + 97) |= 0x2000000u;
        }
      }
    }
  }
  return result;
}
