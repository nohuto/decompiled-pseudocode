/*
 * XREFs of ?_SqmTHQA@@YGXGGK@Z @ 0x158C19
 * Callers:
 *     _ValidateDeviceSignature@36 @ 0x15991D (_ValidateDeviceSignature@36.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge _SqmTHQA(
        unsigned __int16 a1@<dx>,
        unsigned __int16 a2@<cx>,
        int a3,
        unsigned __int16 a4,
        unsigned int a5)
{
  _DWORD v5[12]; // [esp+4h] [ebp-34h] BYREF

  if ( _gSqmIsOptedIn )
  {
    v5[2] = a2;
    v5[6] = a1;
    v5[10] = a3;
    v5[3] = 0;
    v5[7] = 0;
    v5[11] = 0;
    v5[0] = 16;
    v5[1] = 1;
    v5[4] = 16;
    v5[5] = 1;
    v5[8] = 16;
    v5[9] = 1;
    WinSqmAddToStreamEx(0, 9179, 3, v5, 0);
  }
}
