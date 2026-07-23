/*
 * XREFs of HalpAuditSelectRsdtOrXsdt @ 0x140A667A8
 * Callers:
 *     HalpAuditEnumerateRsdtsInRange @ 0x140A666CC (HalpAuditEnumerateRsdtsInRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAuditSelectRsdtOrXsdt(__int64 a1, __int64 a2)
{
  int v3; // r11d
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // r10d
  __int64 v7; // r9
  char v8; // cl
  char *v9; // rbx
  char v10; // al
  int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rax
  int v14; // eax

  v3 = 0;
  v4 = -1072431079;
  while ( 1 )
  {
    v5 = *(unsigned __int8 *)(a1 + 15);
    v6 = v3 == 0 ? 2 : 0;
    if ( v5 >= v6 )
      v5 = v3 == 0 ? 2 : 0;
    if ( v5 < 2 )
    {
      v7 = 20LL;
      goto LABEL_7;
    }
    v7 = *(unsigned int *)(a1 + 20);
    if ( (unsigned int)(v7 - 33) <= 0x63 )
      break;
LABEL_20:
    if ( (unsigned int)++v3 >= 2 )
      return v4;
  }
  v8 = 0;
  if ( !(_DWORD)v7 )
    goto LABEL_9;
LABEL_7:
  v9 = (char *)a1;
  v8 = 0;
  do
  {
    v10 = *v9++;
    v8 += v10;
    --v7;
  }
  while ( v7 );
LABEL_9:
  if ( v8 )
  {
    v4 = -1073741823;
    goto LABEL_20;
  }
  v11 = *(_DWORD *)(a2 + 12) | 2;
  *(_DWORD *)(a2 + 12) = v11;
  v12 = *(unsigned __int8 *)(a1 + 15);
  if ( v12 >= v6 )
    v12 = v3 == 0 ? 2 : 0;
  if ( v12 >= 2 && (v13 = *(_QWORD *)(a1 + 24)) != 0 )
  {
    *(_QWORD *)a2 = v13;
    *(_DWORD *)(a2 + 12) = v11 | 4;
    v14 = 0;
  }
  else
  {
    *(_QWORD *)a2 = *(unsigned int *)(a1 + 16);
    v14 = *(_DWORD *)(a1 + 20);
  }
  *(_DWORD *)(a2 + 8) = v14;
  return 0;
}
